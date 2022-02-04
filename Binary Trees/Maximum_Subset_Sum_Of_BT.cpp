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

BinaryTree *inputLevelOrder()
{
	int num; cin >> num;
	if (num == -1)return NULL;
	queue<BinaryTree *>q;

	BinaryTree *root = new BinaryTree(num);
	q.push(root);

	while (!q.empty())
	{
		BinaryTree *front = q.front();
		q.pop();

		int leftChildData, rightChildData;

		cin >> leftChildData;
		if (leftChildData != -1)
		{
			BinaryTree *leftChild = new BinaryTree(leftChildData);
			front->left = leftChild;
			q.push(leftChild);
		}

		cin >> rightChildData;
		if (rightChildData != -1)
		{
			BinaryTree *rightChild = new BinaryTree(rightChildData);
			front->right = rightChild;
			q.push(rightChild);
		}

	}
	return root;
}


void pritLevelOrder(BinaryTree *root)
{


	queue<BinaryTree *>pendingNodes;
	// stack<BinaryTree *>
	pendingNodes.push(root);
	// BinaryTree *front = pendingNodes.front();

	// cout << front->left->data << endl;
	// cout << front->right->data << endl;
	while (!pendingNodes.empty())
	{
		BinaryTree *front = pendingNodes.front();
		cout << front->data << ":";
		// BinaryTree *front = pendingNodes.front();
		pendingNodes.pop();
		if (front->left != NULL)
		{
			pendingNodes.push(front->left);
			cout <<  front->left->data << " ";
		}
		// else cout << " N/ ";

		if (front->right != NULL)
		{
			pendingNodes.push(front->right);
			cout <<  front->right->data << " ";
		}
		// else cout <<b " N ";
		cout << endl;
	}
}



pair<int, int>maxSubsetSum(BinaryTree *root)
{

	pair<int, int>ans, leftSum, rightSum;

	if (root == NULL)
	{
		ans.first = ans.second = 0;
		return ans;
	}


	leftSum = maxSubsetSum(root->left);
	rightSum = maxSubsetSum(root->right);

	ans.first = root->data + leftSum.second + rightSum.second;
	ans.second = max(leftSum.first, leftSum.second) + max(rightSum.first, rightSum.second);

	return ans;

}


int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	BinaryTree *root = inputLevelOrder();
	pritLevelOrder(root);

	pair<int, int>ans = maxSubsetSum(root);
	// pritLevelOrder(root);
	cout << max(ans.first, ans.second);
	cout << endl;

    return 0;
}

// coded with the ❤️ Avnoor

