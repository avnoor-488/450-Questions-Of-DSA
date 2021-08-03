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

int solve(vector<vector<int> > arr, int row, int col)
{
    int min = INT_MAX, max = INT_MIN;
    int target = (row * col + 1) / 2;

    for (int i = 0; i < row; i++)
    {
        if (arr[i][0] < min)min = arr[i][0];
        if (arr[i][col - 1] > max)max = arr[i][col - 1];
    }

    while (min < max)
    {
        int mid = min + (max - min) / 2;
        int start = 0;
        for (int i = 0; i < row; ++i)
            start += upper_bound(&arr[i][0], &arr[i][col], mid) - &arr[i][0];
        if (start < target)
            min = mid + 1;
        else
            max = mid;
    }

    return min;
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

    int key;
    cin >> key;


    cout << solve(matrix, row, col);

    return 0;
}

// coded with the ❤️ Avnoor


