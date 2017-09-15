#include <bits/stdc++.h>
using namespace std;

vector <int> adj[10];

int main()
{
	int x, y, nodes, edges;
	cin >> nodes >> edges;

	for(int i=0; i<edges; ++i)
	{
		cin >> x >> y;
		adj[x].push_back(y);
	}

	for(int i=1; i<=nodes; ++i)
	{
		cout << "Ajacency list of node " << i << " : ";
		for(int j=0; j<adj[i].size(); ++j)
		{
			if(j == adj[i].size()-1)
				cout << adj[i][j] << "\n";
			else
				cout << adj[i][j] << " --> ";
		}
	}
	return 0;
}

/*
4
5
1 2
2 4
3 1
3 4
4 2

*/

// Question for edge existence

/*
#include <bits/stdc++.h>
using namespace std;

vector <int> adj[1002];

int main()
{
	int x, y, nodes, edges, queries;
	cin >> nodes >> edges;

	for(int i=0; i<edges; ++i)
	{
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	cin >> queries;
	for(int i=0; i<queries; ++i)
	{
		cin >> x >> y;
		int f = 0;
		for(int j=0; j<adj[x].size(); ++j)
		{
			if(y == adj[x][j])
				f = 1;
		}
		if(f == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}*/