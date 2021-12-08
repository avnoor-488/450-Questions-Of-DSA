#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007
// #define num 4e6 + 5



typedef pair<int, int> pii;
typedef vector<string> vs;
typedef set<int> seti;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vv;
// typedef map<int,int>

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



vv solve(vi vec)
{
    // cout << vec.size();
    vv output;

    for (int i = 0 ; i < vec.size() - 1; i++)
    {
        unordered_set<int>s;

        for (int j = i + 1; j < vec.size(); j++)
        {
            int currSum = -(vec[i] + vec[j]);
            vector<int>num;
            if (s.find(currSum) != s.end())
            {
                num.push_back(vec[i]);
                num.push_back(currSum);
                num.push_back(vec[j]);

                output.push_back(num);
            }
            else s.insert(vec[j]);

        }
    }

    return output;

}

int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vi vec;
    forT(n)
    {
        int no;
        cin >> no;
        vec.pb(no);

    }

    // cout << target;
    vv ans = solve(vec);

    // for (auto it : ans)
    // {
    // cout << it << " ";
    // }
    // solve(/vec);
    // cout << ans.size();
    for (int i = 0; i < ans.size(); i++) {
        for (
            auto it = ans[i].begin();
            it != ans[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}

// coded with the ❤️ Avnoor

