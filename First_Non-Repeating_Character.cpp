#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define sec second
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007


typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vv;


void fastscan( int &number)
{
    bool negative = false;
    register int c;

    number = 0;

    c = getchar();
    if (c == '-')
    {
        negative = true;

        c = getchar();
    }

    for (; (c > 47 && c < 58); c = getchar())
        number = number * 10 + c - 48;


    if (negative)
        number *= -1;
}

// ll gcd (ll a, ll b)
// {
//     if (b == 0)
//         return a;

//     return gcd(b, a % b);
// }


void solve(string str)
{
    // cout << "solve" << " ";

    map<int, int>mp;
    vector<char>ch;
    queue<char>q;

    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i] - 'a']++;
        q.push(str[i]);

        while (!q.empty())
        {
            int idx = q.front() - 'a';
            if (mp[idx] > 1)
            {
                q.pop();
                // 
                // ch.push_back(0);
            }
            else
            {
                // ch.push_back(q.front());
                cout << q.front() << " ";
                break;
            }
        }

        if (q.empty())cout << 0 << " ";

    }

    // return ch;
}

int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    // int n;
    // fastscan(n) ;
    // cin >> n;

    // vi vec;

    // forT(n)
    // {
    //     int no;
    //     cin >> no;
    //     vec.pb(no);
    // }

    // sort(vec.begin(), vec.end());
    solve(str);
    return 0;
}

// coded with the ❤️ Avnoor


