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
// ll arr[100010];

vi solve(vector<vector<int>> vec, int k)
{
    vector<int>ans;
    priority_queue <int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++)
            pq.push(vec[i][j]);
        // cout << endl;//
    }

    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;

}



int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n ;

    vector<vector<int>> vec1;

    forT(n)
    {
        forN(n)
        {
            cin >> vec1[i][j];
        }

    }

    int k;
    cin >> k;

    vi output = solve(vec1, n);

    forT(output.size())
    {
        cout << output[i] << " ";
    }

    return 0;
}

// coded with the ❤️ Avnoor


