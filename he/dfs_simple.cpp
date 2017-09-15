#include <bits/stdc++.h>
using namespace std;
#define max 100003
vector <int> v[max];
bool vis[max];

void dfs(int s)
{
	vis[s] = true;
	for(int i=0; i<v[s].size(); ++i)
	{
		if(vis[v[s][i]] == false)
		{
			dfs(v[s][i]);
		}
	}
}

int main()
{
	int nodes, edges, x, y, component=0, head, f = 0;
	for(int i=0; i<max; ++i)
		v[i].clear();
	memset(vis, 0, sizeof(vis));

	cin >> nodes >> edges;
	for(int i=0; i<edges; ++i)
	{
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	cin >> head;

	dfs(head);

	for(int i=1; i<=nodes; ++i)
	{
		if(vis[i] == false)
		{
			++f;
		}
	}
	cout << f << "\n";
	return 0;
}

/*
10 10
8 1
8 3
7 4
7 5
2 6
10 7
2 8
10 9
2 10
5 10
2

*/

/*
#include <bits/stdc++.h>
using namespace std;

vector <int> adj[10];
bool visited[10];

void dfs(int s)
{
	visited[s] = true;
	for(int i=0; i<adj[s].size(); ++i)
	{
		if(visited[adj[s][i]] == false)
		{
			dfs(adj[s][i]);
			visited[adj[s][i]] = true;
		}
	}
}

int main()
{
	int nodes, edges, x, y, connectedComponents = 0;
	memset(visited, 0, sizeof(visited));
	for(int i=0; i<11; ++i)
		adj[i].clear();

	cin >> nodes >> edges;
	for(int i=0; i<edges; ++i)
	{
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	for(int i=1; i<= nodes; ++i)
	{
		if(visited[i] == false)
		{
			dfs(i);
			++connectedComponents;
		}
	}
	cout << "Number of connected components: " << connectedComponents << "\n";

	return 0;
}
*/
/*
6
4
1 2
2 3
1 3
4 5

*/

/*#include <bits/stdc++.h>
using namespace std;

vector <int> adj[10];
bool visited[10];

void dfs(int s)
{
	visited[s] = true;
	for(int i=0; i<adj[i].size(); ++i)
	{
		if(visited[adj[s][i]] == false)
			dfs(adj[s][i]);
	}
}

int main()
{
	int nodes, edges, x, y, connectedcomponent = 0;
	memset(visited, 0, sizeof(visited));
	for(int i=0; i<10; ++i)
	{
		adj[i].clear();
	}

	cin >> nodes >> edges;
	for(int i=0; i<edges; ++i)
	{
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	for(int i=1; i<= nodes; ++i)
	{
		if(visited[i] == false)
		{
			dfs(i);
			++connectedcomponent;
		}
	}
	cout << "Number of connected components: " << connectedComponents << "\n";
	return 0;
}
*/