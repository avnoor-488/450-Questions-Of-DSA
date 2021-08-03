//Given are the N distinct points on a 2D-plane ,we have to calculate the number of right angled 
//triangles formed by these points such that base or the perpendicular are parllel to x-axis or y-axis.

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
typedef long long ll;
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

void solve(vector<pii>vec)
{
    unordered_map<int, int>CountX, CountY;
    int count = 0;

    for (auto it : vec)
    {
        int x = it.fi;
        int y = it.sec;

        CountX[x]++;
        CountY[y]++;
    }


    for (auto it : vec)
    {
        int x = it.fi;
        int y = it.sec;

        int fx = CountX[x];
        int fy = CountY[y];
        if (fx > 1 and fy > 1)count += (fx - 1) * (fy - 1);
    }
    cout << count << endl;
}



int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n;
    vector<pii>vec;
    forT(n)
    {
        int x, y;
        cin >> x >> y;
        vec.pb({x, y});
    }

    solve(vec);
    return 0;
}
//sample input :-
// 1 2
// 2 1
// 2 2
// 2 3
// 3 2

//sample output:- 4


// coded with the ❤️ Avnoor
