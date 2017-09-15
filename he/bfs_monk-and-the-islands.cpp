#include <bits/stdc++.h>
using namespace std;

vector <int> v[100003];
int level[100003];
bool vis[100003];

void bfs(int s)
{
	queue <int> q;
	q.push(s);
	level[s] = 0;
	vis[s] = true;

	while( !q.empty() )
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
	int t;
	cin >> t;
	while(t--)
	{
		memset(level, 0, sizeof(level));
		memset(vis, false, sizeof(vis));
		for(int i=0; i<100003; ++i)
		{
			v[i].clear();
		}
		int n,m,x,y,count=0;
		cin >> n >> m;
		for(int i=0; i<m; ++i)
		{
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		bfs(1);
		cout << level[n] - level[1] << "\n";
	}
	return 0;
}

/*
2
3 2
1 2
2 3
4 4
1 2
2 3
3 4
4 2

*/