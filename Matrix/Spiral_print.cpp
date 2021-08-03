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

void solve(vector<vector<int> > arr, int rows, int cols)
{
    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    int dir = 1;

    while (top <= bottom && left <= right) {

        if (dir == 1) { 
            for (int i = left; i <= right; ++i) {
                cout << arr[top][i]  << " ";
            }   
            ++top;
            dir = 2;
        }

        else if (dir == 2) { 
            for (int i = top; i <= bottom; ++i) {
                cout << arr[i][right]  << " ";
            }       
            --right;
            dir = 3;
        }

        else if (dir == 3) { 
            for (int i = right; i >= left; --i) {
                cout << arr[bottom][i] << " ";
            }
            --bottom;
            dir = 4;
        }
        
        else if (dir == 4) { 
            for (int i = bottom; i >= top; --i) {
                cout << arr[i][left] << " ";
            }

            ++left;
            dir = 1;
        }
    }

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

    forT(row)
    {
        forN(col)
        {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }


    cout << endl;
    solve(matrix, row, col);
    // cout << output.size();
    // forT(output.size())
    // {
    //     cout << output[i] << " ";
    // }

    return 0;
}

// coded with the ❤️ Avnoor


