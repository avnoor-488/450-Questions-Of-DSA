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


void solve()
{
    int n, ans = -1;
    cin >> n;

    vi vec(n);
    readVec(vec, n);


    unordered_map<int, int>mp;

    forT(vec.size())
    {
        mp[vec[i]]++;

        if (mp[vec[i]] > vec.size() / 2)
        {
            ans = vec[i];
            break;
        }
    }

    cout << ans << endl;
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
        solve();
    }
    return 0;
}

// coded with the ❤️ Avnoor
