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

bool solve(string s)
{
    stack<char>st;
    bool ans = false;
    int mid = s.length() / 2;
    for (int i = 0; i < mid; i++)
    {
        st.push(s[i]);
    }

    for (int i = mid ; i < s.length(); i++)
    {
        if (st.top() == s[i])st.pop();
        else continue;
    }

    if (st.empty())ans = true;
    return ans;

}


int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;


    if (solve(s))cout << "Yes" << endl;
    else cout << "No" << endl;
}
// return 0;





// coded with the ❤️ Avnoor
