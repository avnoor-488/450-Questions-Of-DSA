#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define sec second
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007
#define all(cont) cont.begin(), cont.end()
#define vll vector<ll>
#define pll pair<ll, ll>

typedef pair<int, int> pii;
typedef set<int> seti;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vi> vv;
typedef vector<vector<string>> vss;


void readVec(vi &vec, int n)
{
    for (int i = 0; i < n; i++)
        cin >> vec[i];
}


void printVec(vi vec, int n)
{
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
    cout << endl;
}

void fastscan( ll &number)
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



ll gcd (ll a, ll b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}



void  solve(vi &vec, int n, vi &wt, int w)
{

    int dp[n + 1][w + 1] = { -1};

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;

            if (i > 0 && j > 0) {
                if (j >= wt[i - 1])
                    dp[i][j] = max(vec[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);

                else dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][w];

}



int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w ;
        // vi dp(n + 1, -1);
        vi vec(n), wt(n);
        readVec(vec, n);
        readVec(wt, n);
        solve(vec, n, wt, w);
    }
    return 0;
}

// coded with the ❤️ Avnoor
