#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define fi first
#define forT(t) for(int i=0;i<t;i++)
#define forN(n) for(int j=0;j<n;j++)
#define MOD 1000000007


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

// ll gcd (ll a, ll b)
// {
//     if (b == 0)
//         return a;

//     return gcd(b, a % b);
// }


class BinaryTree
{
public:
    int data;
    BinaryTree *left;
    BinaryTree *right;

    BinaryTree(int data)
    {
        this->data = data;
        left = NULL; right = NULL;

    }
    ~BinaryTree()
    {
        delete left;
        delete right;
    }

};

BinaryTree *input()
{
    int num;
    // cout << "Enter root data" << endl;
    cin >> num;
    if (num == -1)return NULL;

    BinaryTree *root = new BinaryTree(num);
    BinaryTree *leftData = input();
    BinaryTree *rightData = input();
    root->left = leftData;
    root->right = rightData;


    return root;
}

int height(BinaryTree *root)
{
    if (root == NULL)return 0;
    return max((1 + height(root->right)), (1 + height(root->left)));
}


int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    BinaryTree *root = input();
    cout << height(root);
    cout << endl;


    return 0;
}

// coded with the ❤️ Avnoor


