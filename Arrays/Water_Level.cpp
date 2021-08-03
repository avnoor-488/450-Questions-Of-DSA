//Given n non-negative integers representing an elevation map where the width 
//of each bar is 1, compute how much water it can trap after raining.


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

// ll gcd (ll a, ll b)
// {
//     if (b == 0)
//         return a;

//     return gcd(b, a % b);
// }


void solve(vi vec)
{

    int count = 0;
    int len = vec.size();
    vi left(len, 0), right(len, 0);
    left[0] = vec[0];
    right[len - 1] = vec[len - 1];
    for (int i = 1; i < vec.size() ; i++)
    {
        left[i] = max(left[i - 1], vec[i]);
        right[len - i - 1] = max(right[len - i], vec[len - i - 1]);

    }


    for (int i = 0; i < vec.size(); i++)
    {
        count += max(left[i], right[i]) - vec[i];
    }
    
    cout << count << " " << endl;
}



int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    // fastscan(n) ;
    cin >> n;

    vi vec;

    forT(n)
    {
        int no;
        cin >> no;
        vec.pb(no);
    }

    solve(vec);


    return 0;
}

// coded with the ❤️ Avnoor


