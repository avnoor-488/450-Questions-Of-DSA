//Question Link :- https://leetcode.com/problems/two-sum/

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



vi solve(vi vec, int target)
{
    vi ans;
    unordered_map<int, int>mp;
    forT(vec.size())
    {
        if (mp.find(target - vec[i]) != mp.end())
        {
            ans.pb(mp[target - vec[i]]);
            ans.pb(i);
            return ans;
        }

        mp[vec[i]] = i;
    }

    return ans;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

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

    int target ;
    cin >> target;
    // cout << target;
    vi ans = solve(vec, target);

    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}

// coded with the ❤️ Avnoor

