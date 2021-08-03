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


void solve(vi vec)
{
    pair<int, int>mp[vec.size()];

    int countSwap = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        mp[i].fi = vec[i];
        mp[i].sec = i;

    }

    sort(mp, mp + vec.size());
    vector<bool>visited(vec.size(), 0);
    for (auto i = 0; i < vec.size(); i++)
    {
        int oldPos = mp[i].sec;
        if (visited[i] == true or oldPos == i)continue;

        int node = i;
        int cycle = 0;

        while (visited[node] == false)
        {
            visited[node] = true;
            int nexPos = mp[node].sec;
            node = nexPos;
            cycle++;
        }

        countSwap += cycle - 1;
    }


    cout << countSwap;
}



int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    // fastscan(n) ;
    cin >> n;

    vi vec;

    forT(n)
    {
        int no;
        cin >> no;
        vec.pb(no);
    }

    // sort(vec.begin(), vec.end());
    solve(vec);


    return 0;
}

// coded with the ❤️ Avnoor


