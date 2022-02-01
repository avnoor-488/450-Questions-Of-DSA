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
    ll n, m; cin >> n >> m;
    vi vec1(n), vec2(m);

    readVec(vec1, n);
    readVec(vec2, m);


    unordered_map<int, int>mp;

    for (int i = 0; i < vec1.size(); i++)
        mp[vec1[i]]++;
    for (int i = 0; i < vec2.size(); i++)
        mp[vec2[i]]++;

    cout << mp.size();
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
