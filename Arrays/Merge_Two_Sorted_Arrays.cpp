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
    int n1, n2;
    cin >> n1 ;
    vi vec1, vec2, output;
    forN(n1)
    {
        int no;
        cin >> no;
        vec1.pb(no);
    }
  
    cin >> n2;

    forN(n2)
    {
        int no;
        cin >> no;
        vec2.pb(no);
    }

    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (vec1[i] < vec2[j])
        {
            output.pb(vec1[i]);
            i++;
        }

        else
        {
            output.pb(vec2[j]);
            j++;
        }
    }

    if (i == n1)
    {
        while (j != n2)
        {
            output.pb(vec2[j]);
            j++;
        }

    }
    else
    {
        while (j != n2)
        {
            output.pb(vec1[i]);
            i++;
        }

    }
    forT(output.size())
    {
        cout << output[i] << " ";
    }


    return 0;

}

// coded with the ❤️ Avnoor


