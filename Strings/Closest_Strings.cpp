// Given a list of words followed by two words, the task to find the minimum distance between 
// the given two words in the list of words.
// https://practice.geeksforgeeks.org/problems/closest-strings0611/

#include <bits/stdc++.h>
using namespace std;

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


void fastscan(int &number)
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

bool comp(pair<int, int> x, pair<int, int> y)
{
    if (x.fi != y.fi)
        return x.fi > y.fi;
    else
        return x.sec > y.sec;
}


int shortestDistance(vector<string> &vec, string word1, string word2)
{
    // Your code goes here
    vector<int> vec1;
    int check1 = 0, check2 = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == word1)check1 = i + 1;
        if (vec[i] == word2)check2 = i + 1;

        if (check2 > 0 && check1 > 0)
        {
            vec1.push_back(abs(check2 - check1));
        }
    }

    return  *min_element(vec1.begin(), vec1.end());
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

    vector<string>vec;
    string word1, word2;
    while (t--)
    {
        string str;
        cin >> str;
        vec.pb(str);
    }
    cin >> word1 >> word2;

    cout << shortestDistance(vec, word1, word2) << endl;

}
// return 0;





// coded with the ❤️ Avnoor
