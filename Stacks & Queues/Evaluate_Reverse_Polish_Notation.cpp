#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007
// #define num 4 e6 + 5



typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vv;
// typedef map<int,int>

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

int c2calc(int p,
           int q)
{
    int mod = 998244353, expo;
    expo = mod - 2;
    while (expo)
    {
        if (expo & 1)
        {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        expo >>= 1;
    }
    return p;
}


void solve()
{
    int n ;
    cin >> n;

    vector<string>vec;

    while (n--)
    {
        string str;
        cin >> str;

        vec.pb(str);
    }

    // for (auto it : vec)cout << it << " ";



    stack<int>s;

    for (auto it : vec)
    {
        if (it == "+" or it == "-" or it == "*" or it == "/")
        {
            int x = s.top();
            s.pop();
            int y = s.top();
            s.pop();

            if (it == "+")s.push(x + y);
            else if (it == "-")s.push(x - y);
            else if (it == "/")s.push(x / y);
            else s.push(x * y);
        }
        else s.push(stoi(it));
    }
    cout << s.top();
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


    while (t--) {
        solve();
    }

    return 0;
}

// coded with the ❤️ Avnoor

