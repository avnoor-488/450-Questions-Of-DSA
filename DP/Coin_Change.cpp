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
typedef vector<string> vs;
typedef set<int> seti;
typedef long long int ll;
typedef vector<int> vi;
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



void  solve(vi &s, int m, int n)
{

    long long int Count[m + 1][n + 1];
    memset(Count, 0, sizeof(Count));



    for (int i = 0 ; i < m + 1 ; i++)
        Count[i][0] = 1;

    for (int j = 1 ; j < n + 1 ; j++)
        Count[0][j] = 0;

    for (int i = 1; i < m + 1 ; i++)
    {
        for (int j = 1 ; j < n + 1; j++)
        {
            if (s[i - 1] <= j)
            {
                long long int included = Count[i][j - s[i - 1]];
                long long int not_included = Count[i - 1][j];

                Count[i][j] = included + not_included;
            }

            else if (s[i - 1] > j)
                Count[i][j] = Count[i - 1][j];
        }
    }

    cout << Count[m][n];

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
        int n, m;
        cin >> n ;
        // vi dp(n + 1, -1);
        vi vec(n);
        readVec(vec, n);

        int sum; cin >> sum;
        solve(vec, n, sum);
    }
    return 0;
}

// coded with the ❤️ Avnoor
