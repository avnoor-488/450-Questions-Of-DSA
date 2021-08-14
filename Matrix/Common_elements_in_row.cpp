// Given an m x n matrix, find all common elements 
// present in all rows in O(mn) time and one traversal of matrix.


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
    int  ans = 0;
    unordered_map<int, int>mp;
    for (int i = 0; i < m; i++)
    {
        mp[vec[0][i]] = 1;
    }


    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mp[vec[i][j]] == i)
            {
                mp[vec[i][j]]++;

                if (i == n - 1 and mp[vec[i][j]] == n)cout << vec[i][j] << " ";
            }
        }
    }
    // cout << ans << endl;

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
  
    return 0;
}





// coded with the ❤️ Avnoor
