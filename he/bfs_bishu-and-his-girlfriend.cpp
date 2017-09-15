#include <bits/stdc++.h>
using namespace std;
#define max 1003

vector <int> v[max];
bool vis[max];
int level[max];
int girls[max];

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

int main()
{
	memset(vis, false, sizeof(vis));
	memset(level, 0, sizeof(level));
	for(int i=0; i<max; ++i)
		v[i].clear();

	int nodes, edges, x, y, q, levl=max, ans=0;
	cin >> nodes;
	edges = nodes-1;
	for(int i=0; i<edges; ++i)
	{
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	bfs(1);

	cin >> q;

	for(int i=0; i<q; ++i)
	{
		cin >> girls[i];
	}

	sort(girls, girls+q);

	for(int i=0; i<q; ++i)
	{
		if(level[i] < levl)
		{
			ans = girls[i];
			levl = level[i];
		}
	}
	cout << ans << "\n";

	return 0;
}