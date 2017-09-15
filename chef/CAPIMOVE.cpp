#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

static long int get_i()
{
	char c=getchar_unlocked();
	while(c<'0'||c>'9')
	c=getchar_unlocked();
	long int ret=0;
	while(c>='0'&&c<='9')
	{
		ret=ret*10+c-'0';
		c=getchar_unlocked();
	}
	return ret;
}

int main()
{
	int t;
	t = get_i();
	while(t--)
	{
		vector <long long int> adj[50002];
		long long int n,u,v,i,j,k;
		n = get_i();

		long long int a[n];
		map<long long int, long long int> match;

		for(i=0; i<n; i++)
		{
			a[i] = get_i();
			match.insert( pair <long long int, long long int> (a[i],i+1));
		}
		for(i=1; i<n; i++)
		{
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		std::map<long long int, long long int>::reverse_iterator rit;
		for(i=1; i<=n; i++)
		{
			long long int siz = adj[i].size();

			long long int mx[siz+1];

			for(j=0; j < siz; j++)
			{
				mx[j] = a[adj[i][j]-1];
			}
			mx[siz] = a[i-1];
			sort(mx, mx+siz+1);

			for (rit=match.rbegin(); rit!=match.rend(); ++rit)
			{
				if(rit->first != mx[siz])
				{
					cout << rit->second << " ";
					break;
				}
				else
					siz--;
			}
		}

		cout << "\n";
	}
	return 0;
}

/*
1
6
5 10 15 20 25 30
1 3
2 3
3 4
4 5
4 6

*/

/*
		for(i=1; i<=n; i++)
		{
			map<long long int, long long int> match1;
			match1.insert(match.begin(), match.end());

			match1.erase(a[i-1]);
			for(j=0; j < adj[i].size(); j++)
			{
				match1.erase(a[adj[i][j]-1]);
			}
			cout << (--match1.end())->second << " ";
		}
*/