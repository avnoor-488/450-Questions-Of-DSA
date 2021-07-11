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

int solve(vector<vector<int> > arr, int row, int col, int k)
{
    priority_queue<int, vector<int> , greater<int>>pq;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pq.push(arr[i][j]);
        }
    }


    int j = 1, ans;
    while (j != k + 1)
    {
        ans = pq.top();
        pq.pop();
        j++;
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
    int row, col;
    cin >> row >> col;
    vector<vector<int> > matrix(row);
    forT(row)
    {
        matrix[i].assign(col, 0);
        forN(col)
        {

            cin >> matrix[i][j];
        }
    }

    int k;
    cin>>k;



    cout << solve(matrix, row, col, k);
    return 0;
}

// coded with the ❤️ Avnoor


