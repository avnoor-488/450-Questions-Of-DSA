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



ll gcd (ll a, ll b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}


void solve()
{
    int n, k; cin >> n >> k;
    vi vec(n);

    readVec(vec, n);

    sort(vec.begin(), vec.end());
    int small = vec[0] + k;
    int large = vec[vec.size() - 1] - k;
    int ans = vec[vec.size() - 1] - vec[0];

    for (int i = 0; i < vec.size(); i++)
    {
        int mini = min(small, vec[i + 1] - k);
        int maxi = max(large, vec[i] + k);
        if (mini < 0)continue;
        ans = min(ans, maxi - mini);
    }
    cout << ans;
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
