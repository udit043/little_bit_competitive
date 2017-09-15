#include <bits/stdc++.h>
using namespace std;

vector <int> v[100003];
bool vis[100003];
int level[100003];

void bfs(int s)
{
	queue <int> q;
	q.push(s);
	level[s] = 1; // Generally it is zero but in "Level Nodes" question, it has written that level of root nodes is 1
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
	for(int i=0; i<100003; ++i)
	{
		level[i] = 0;
		vis[i] = false;
	}

	int x,y,nodes,query,count=0;
	cin >> nodes;
	for(int i=0; i<nodes-1; ++i)
	{
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	cin >> query;

	bfs(1);
	for(int i=0; i<=nodes; ++i)
		if(level[i] == query)
			++count;
	cout << count << "\n";
	return 0;
}

/*
20
11 1
1 2
13 3
15 4
17 5
11 6
2 7
1 8
15 9
4 10
15 12
5 13
2 14
17 15
15 16
11 17
15 18
9 19
16 20
2

*/