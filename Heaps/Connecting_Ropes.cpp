// There are given N ropes of different lengths, we need to connect these ropes into one rope. The cost to connect 
// two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost.

#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
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

void solve(vi vec)
{
    priority_queue<int, vi, greater<int>>pq;

    for (int i = 0; i < vec.size(); i++)
    {
        pq.push(vec[i]);
    }

    int sum = 0;

    while (pq.size() > 1)
    {
        int x = pq.top();
        pq.pop();;
        int y = pq.top();
        pq.pop();

        sum += x + y;
        pq.push(x + y);
    }

    cout << sum << " ";
}

int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vi vec;

    forT(t)
    {
        int no;
        cin >> no;
        vec.pb(no);
    }

    solve(vec);
    return 0;
}





// coded with the ❤️ Avnoor
