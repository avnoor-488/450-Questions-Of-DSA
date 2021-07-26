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

class BinaryTree {
public:
    int data;
    BinaryTree *left;
    BinaryTree *right;

    BinaryTree(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTree()
    {
        delete left;
        delete right;
    }
};

BinaryTree *buildTree()
{
    int d;
    cin >> d;

    if (d == -1)return NULL;

    BinaryTree *root = new BinaryTree(d);
    BinaryTree *left = buildTree();
    BinaryTree *right = buildTree();
    root->left = left;
    root->right = right;

    return root;
}


void levelOrderPrint(BinaryTree *root)
{
    queue<BinaryTree *>pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    // temppendingNodes.front();

    while (!pendingNodes.empty())
    {
        // pendingNodes.pop();
        BinaryTree *temp = pendingNodes.front();
        // cout << temp->data << " ";
        // pendingNodes.pop();
        if (temp == NULL)
        {
            cout << endl;
            pendingNodes.pop();
            if (!pendingNodes.empty())pendingNodes.push(NULL);
        }
        else {
            // cout << "solve<";
            pendingNodes.pop();
            cout << temp->data << " ";
            if (temp->left)
            {
                // cout << temp->left->data << " ";
                pendingNodes.push(temp->left);
            }
            if (temp->right)
            {
                // cout << temp->right->data << " ";
                pendingNodes.push(temp->right);
            }
        }
    }
    return ;
}

int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    BinaryTree *root = NULL;
    root = buildTree();

    // cout << root->data;
    levelOrderPrint(root);
    // printTree(root);
    return 0;
}
//input Tree
// 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//output Tree
// 1 
// 2 3 
// 4 5 6 
// 7 



// coded with the ❤️ Avnoor
