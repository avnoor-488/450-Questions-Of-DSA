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
	pendingNodes.push(root);

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



void inorder(BinaryTree *root)
{
	if (root == NULL)return;

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);

}

void preOrder(BinaryTree *root)
{
	if (root == NULL)return;

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);

}

void postOrder(BinaryTree *root)
{

	if (root == NULL)return;

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}


pair<int, int>heightDiameter(BinaryTree *root)
{

	if (root == NULL)
	{
		pair<int, int>p;
		p.first = 0;
		p.second = 0;
		return p;
	}

	pair<int, int>leftAns = heightDiameter(root->left);
	pair<int, int>rightAns = heightDiameter(root->right);

	int lh = leftAns.first;
	int ld = leftAns.second;
	int rh = rightAns.first;
	int rd = rightAns.second;

	int height = 1 + max(lh, rd);
	int diameter = max(lh + rh, max(rd, ld));

	pair<int, int>p;
	p.first = height;
	p.second = diameter;

	return p;

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	BinaryTree *root = inputLevelOrder();
  pair<int,int>height_dia = heightDiameter(root);
  
	cout <<height_dia.first<<"  "<<height_dia.second<<endl;
	
}
