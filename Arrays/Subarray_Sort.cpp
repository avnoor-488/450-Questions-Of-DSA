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
    int startIndex = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i + 1] - vec[i] == 1)continue;
        else
        {
            if (startIndex == 0)
                startIndex = i;
            break;
        }

    }

    int endingIndex = 0;

    for (int i = vec.size() - 1; i > 0; i--)
    {
        if (vec[i] - vec[i - 1] == 1)continue;
        else
        {
            if (endingIndex == 0)
            {
                // cout << i << endl;
                endingIndex = i ;
                break;
            }
        }
    }

    cout << vec[startIndex] << " " << vec[endingIndex - 1];

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


