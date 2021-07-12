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

void solve(vi vec, vi vec1)
{
    int i = 0, j = 0;
    vi output;
    while (i < vec.size() && j < vec1.size())
    {
        if (vec[i] > vec1[j])
        {
            output.pb(vec1[j]);
            j++;
        }
        else
        {
            output.pb(vec[i]);
            i++;
        }
    }

    while (i < vec.size())
    {
        output.pb(vec[i]);
        i++;
    }

    while (j < vec1.size())
    {
        output.pb(vec1[j]);
        j++;
    }


    int count = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i] = output[i];
        count++;
    }

    for (int i = 0; i < vec1.size(); i++)
    {
        vec1[i] = output[count];
        count++;
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
    cin >> row ;
    vi matrix, vec1;
    forT(row)
    {
        int no;
        cin >> no;
        matrix.pb(no);
        // cin >> matrix[i];

    }

    int m;
    cin >> m;

    forT(m)
    {
        int no;
        cin >> no;
        vec1.pb(no);
        // cin >> matrix[i];

    }

    solve(matrix, vec1);
    for (int i = 0; i < matrix.size(); i++)
    {
        cout << matrix[i] << " ";
    }

    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }


    return 0;
}

// coded with the ❤️ Avnoor


