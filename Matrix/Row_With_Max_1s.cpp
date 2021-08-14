// Given a boolean 2D array of n x m dimensions where each row is sorted. 
// Find the 0-based index of the first row that has the maximum number of 1's.

// sample input:-

// 3 9
// 0 0 0 1 1 1 1 1 1
// 0 0 0 0 1 1 1 1 1
// 0 0 0 0 1 1 1 1 1

// sample output:- 0

#include <bits/stdc++.h>
using namespace std;

// #define mp make_pair
#define pb push_back
#define fi first
#define sec second
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007


typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vv;


void fastscan( int &number)
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

void solve(vector<vector<int>>vec, int n, int m)
{

    int currMax = 0, overallMax = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vec[i][j] == 1)currMax++;
            // cout << currMax << " " << i << endl;
        }

        if (currMax > overallMax)
        {
            overallMax = currMax;

            ans = i;
        }
        currMax = 0;
        cout << endl;
    }

    if (overallMax == 0)ans = -1;
    cout << ans << endl;
}


int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector< vector<int> > arr(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }


    solve(arr, n, m);
}



// coded with the ❤️ Avnoor
