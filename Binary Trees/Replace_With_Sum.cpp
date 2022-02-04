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

void printTree(BinaryTree *root)
{
	if (root == NULL)return;
	cout << root->data << ":";
	if (root->left != NULL)cout << "L-" << root->left->data;
	if (root->right != NULL)cout << " R-" << root->right->data;
	cout << endl;
	printTree(root->left);
	printTree(root->right);
}


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


void levelOrderReverse(BinaryTree *root)
{
	queue<BinaryTree *>pendingNodes;
	stack<BinaryTree *>reversedNodes;
	pendingNodes.push(root);

	while (!pendingNodes.empty())
	{
		root = pendingNodes.front();
		// cout << front->data << " ";
		pendingNodes.pop();
		reversedNodes.push(root);
		BinaryTree *top =  reversedNodes.top();
		cout << top->data << " ";
		if (root->right != NULL)
		{
			pendingNodes.push(root->right);
		}

		if (root->left != NULL)
		{
			pendingNodes.push(root->left);
		}
	}
}


int toSumTree(BinaryTree *root)
{
	if (root == NULL)return 0;
	if (root->left == NULL or root->right == NULL)return root->data;

	int leftSum =  toSumTree(root->left);
	int rightSum = toSumTree(root->right);
	int temp = root->data;
	root->data = rightSum + leftSum;

	return temp + root->data;
}



int main()
{
  
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif


	BinaryTree *root = inputLevelOrder();
	pritLevelOrder(root);
	toSumTree(root);
  cout<<endl;
	pritLevelOrder(root);
}




//input 
// 1
// 2 3
// 4 5 -1 6 
// -1 -1 7 -1 -1 -1
