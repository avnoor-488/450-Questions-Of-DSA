#include<bits/stdc++.h>
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


class Graph {
	int v;
	list<int> *l;

public :
	Graph(int V)
	{
		v = V;
		l = new list<int>[v];
	}

	void addEdge(int i , int j, bool undir = true)
	{
		l[i].pb(j);
		if (undir)l[j].pb(i);
	}

	void printAddJencyList()
	{
		for (int i = 0; i < v; i++)
		{
			//every element of ith linkedList
			cout << i << "-->";

			for (auto node : l[i])cout << node << ",";
			cout << endl;
		}
	}

	void BFS(int source)
	{
		vector<bool>visited{false};

		queue<int>pendingNodes;

		pendingNodes.push(source);
		visited[source] = true;
		while (!pendingNodes.empty())
		{
			int front = pendingNodes.front();
			cout << front << " ";
			pendingNodes.pop();

			for (auto nbr : l[front])
			{
				if (!visited[nbr])
				{
					pendingNodes.push(nbr);
					visited[nbr] = true;

				}
			}
		}
	}

	void shortestPathBFS(int source, int dest)
	{
		vector<bool>visited{false};
		vector<int>parent{ -1};
		vector<int>dist{0};
		queue<int>pendingNodes;
		pendingNodes.push(source);

		visited[source] = true;
		parent[source] = source;
		dist[source] = 0;

		while (!pendingNodes.empty())
		{
			int front = pendingNodes.front();
			cout << front << " ";
			pendingNodes.pop();

			for (auto nbr : l[front])
			{
				if (!visited[nbr])
				{
					pendingNodes.push(nbr);
					parent[nbr] = front;
					dist[nbr] = dist[front] + 1;
					visited[nbr] = true;
				}
			}
		}

		for (int i = 0; i < v; i++)
		{
			cout << "Shortest Dist to" << i << " " << dist[i] << endl;

		}

		if (dest != -1)
		{
			int temp = dest;
			while (temp != source)
			{
				cout << temp << " ";
				temp = parent[temp];
			}

			cout << source << endl;
		}
	}
};

int main ()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	Graph g(6);

	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(2, 1);
	g.addEdge(3, 4);
	g.addEdge(4, 5);
	g.addEdge(2, 3);
	g.addEdge(3, 5);

	g.printAddJencyList();
	g.BFS(1);

}