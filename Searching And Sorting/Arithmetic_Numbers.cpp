// Given three integers  'A' denoting the first term of an arithmetic sequence , 'C' 
// denoting the common difference of an arithmetic sequence and an integer 'B'. you 
// need to tell whether 'B' exists in the arithmetic sequence or not.



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

int solve()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (c == 0)return b == a;

    return ((b - a ) % c == 0 and (b - a) / c >= 0);


}


int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << solve() << endl;
}
// return 0;





// coded with the ❤️ Avnoor
