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

void solve(vi vec, int r)
{
    unordered_map<ll, ll>right, left;

    for (auto x : vec)
    {
        right[x]++;
        left[x] = 0;
    }

    int count = 0;
    forT(vec.size())
    {
        right[vec[i]]--;
        if (vec[i] % r == 0)
        {
            ll b = vec[i];
            ll a = vec[i] / r;
            ll c = vec[i] * r;

            count += left[a] * right[c];
        }

        left[vec[i]]++;

    }
    cout << count << endl;
}



int main() {

//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ,r;
    cin >> n>>r;
    vi vec;
    forT(n)
    {
        int no;
        cin >> no;
        vec.pb(no);
    }
    solve(vec, r);
    return 0;
}



// coded with the ❤️ Avnoor
