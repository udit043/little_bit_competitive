#include <bits/stdc++.h>
using namespace std;
#define maxi 100003

vector <int> v[maxi];
int level[maxi];
bool vis[maxi];

void bfs(int s)
{
	queue <int> q;
	q.push(s);
	level[s] = 1;
	vis[s] = true;

	while(!q.empty())
	{
		int p = q.front();
		q.pop();

		for(int i=0; i<v[p].size(); ++i)
		{
			if(vis[v[p][i]] == false)
			{
				level[v[p][i]] = level[p] + 1;
				q.push(v[p][i]);
				vis[v[p][i]] = true;
			}
		}
	}
}

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

void init()
{
	memset(level, 0, sizeof(level));
	memset(vis, 0, sizeof(vis));
}

int main()
{
	for(int i=0; i<maxi; ++i)
		v[i].clear();
	int nodes, edges, x, y, height=0;
	cout << "Enter number of nodes and edges ";
	cin >> nodes >> edges;
	cout << "Enter edges :\n";
	for(int i=0; i<edges; ++i)
	{
		cin >> x >> y;
		v[x].push_back(y);      //  directed
		//v[y].push_back(x);    //  undirected
	}
	
	init();
	cout << "\nBFS\n";
	bfs(1);
	for(int i=1; i<=nodes; ++i)
	{
		cout << "node " << i << " has " << v[i].size() << " child : ";
		if(v[i].size() != 0)
		{
			for(int j=0; j<v[i].size(); ++j)
				cout << v[i][j] << " ";
		}
		cout << "\n";
		height = max(height, level[i]);
	}
	cout << "Height of tree " << height << "\n";




	init();
	cout << "\nDFS\n";
	for(int i=1; i<=nodes; ++i)
	{
		if(vis[i] == false)
			dfs(i);
	}
	for(int i=1; i<=nodes; ++i)
	{
		cout << "node " << i << " has " << v[i].size() << " child : ";
		if(v[i].size() != 0)
		{
			for(int j=0; j<v[i].size(); ++j)
				cout << v[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}