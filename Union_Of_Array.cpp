#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007
#define num 4e6 + 5



typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vv;


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

ll dp[100010][110][2];
ll arr[100010];


int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vi vec1, vec2;
    forT(n)
    {
        int no;
        cin >> no;
        vec1.pb(no);
    }

    int m;
    cin >> m;
    forT(m)
    {
        int no;
        cin >> no;
        vec2.pb(no);
    }


    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (vec1[i] < vec2[j])
        {
            cout << vec1[i] << " ";
            i++;
        }

        else if (vec1[i] > vec2[j])
        {
            cout << vec2[j] << " ";
            j++;
        }

        else
        {
            cout << vec2[j] << " ";
            i++;
            j++;
        }
    }

    while (i < n)
    {
        cout << vec1[i] << " ";
        i++;
    }

    while (j < m)
    {
        cout << vec2[j] << " ";
        j++;
    }


    return 0;
}

// coded with the ❤️ Avnoor


