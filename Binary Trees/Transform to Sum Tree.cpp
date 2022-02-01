#include<bits/stdc++.h>

using namespace std;


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



int countNode(BinaryTree *root)
{
	if (root == NULL)return 0;

	return 1 + countNode(root->left) + countNode(root->right);
}


int helper(BinaryTree *root)
{
	if (root)
	{
		int leftSum = helper(root->left);
		int rightSum = helper(root->right);

		int sum = root->data + leftSum + rightSum;
		root->data = leftSum + rightSum;
		return sum;
	}
	return 0;
}

void toSumTree(BinaryTree *root)
{
	helper(root);
}
int main()
{
  
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
  
  
	BinaryTree *root = inputLevelOrder();
	toSumTree(root);
	pritLevelOrder(root);
}
