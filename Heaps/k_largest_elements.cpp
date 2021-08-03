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


vi solve(vi arr, int n, int k)
{
    // code here
    priority_queue<int>pq;
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    int j = 1;
    while (j != k + 1)
    {
        ans.push_back(pq.top());
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
    int n;
    cin >> n ;

    vi vec1;

    forT(n)
    {
        int no;
        cin >> no;
        vec1.pb(no);
        // cin >> matrix[i];

    }

    int k;
    cin >> k;

    vi output = solve(vec1, n, k);

    forT(output.size())
    {
        cout << output[i] << " ";
    }

    return 0;
}

// coded with the ❤️ Avnoor


