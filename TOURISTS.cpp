// TLE More than	
#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
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
 
vector <long long int> adj[100002], adj2[100002];
vector <long long int> b;
bool visited[100002];
 
void dfs(long long int s)
{
	visited[s] = true;
	for(long long int i=0; i<adj[s].size(); i++)
	{
		long long int z = adj[s][i];
		b.push_back(z);
		if(visited[adj[s][i]] == false)
		{
			dfs(adj[s][i]);
		}
	}
}
 
int main()
{
	long long int n,e,i,u,v,k=0,cc=0;
	n = get_i();
	e = get_i();
	long long int a[e+e], a1[e+e], vert[n+1];
 
	memset(a, 0, sizeof a);
	memset(a1, 0, sizeof a1);
	memset(vert, 0, sizeof vert);

	for(i=0; i<n+1; i++)
	{
		visited[i] = false;
		adj[i].clear();
		adj2[i].clear();
	}
 
	for(i=0; i<e; i++)
	{
		u = get_i();
		v = get_i();
 
		a[k] = u;
		k++;
		a[k] = v;
		k++;
 
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
 
	for(i=1; i<=n; i++)
	{
		if( (visited[i] == false) && (adj[i].size() >= 0) )
		{
			dfs(i);
			cc++;
		}
	}
 
	if (n == 1)
	{
		cout << "NO\n";
		return 0;
	}
 
	for(i=1; i<=n; i++)
	{
		//cout << "i hai:" << i << ", cc hai:" << cc <<"\n";
		if( ( (adj[i].size() & 1) != 0)  || (cc != 1) )//if( ( (adj[i].size() & 1) != 0) && (adj[i].size() > 0) || (cc != 1) )
		{
			cout << "NO\n";
			return 0;
		}
	}
 
	//cout << "YES\n";
	for(i=0; i<k; i+=2)
	{
		if(a[i] == b[i+1])
		{
			a1[i]   = a[i];
			a1[i+1] = a[i+1];
			//cout << a[i] << " " << a[i+1] << "\n";
		}
		else
		{
			a1[i]   = a[i+1];
			a1[i+1] = a[i];
			//cout << a[i+1] << " " << a[i] << "\n";
		}
		adj2[a1[i]].push_back(a1[i+1]);
		vert[a1[i]]++;
	}

	for(i=1; i<=n; i++)
	{
		//cout << "i hai " << i << ", vert[" << i << "] " << vert[i] << ", adj2[" << i << "].size() " << adj2[i].size() << "...\n"; 
		if( vert[i] != adj2[i].size())
		{
			cout << "NO\n";
			return 0;
		}
		//fl += 2;
	}

	cout << "YES\n";
	for(i=0; i<k; i+=2)
		cout << a[i] << " " << a[i+1] << "\n";
	return 0;
}

/*#include <iostream>
#include <vector>
#include <cstdio>
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

vector <long long int> adj[100002];
bool visited[100002];

void dfs(long long int s)
{
	visited[s] = true;
	for(long long int i=0; i<adj[s].size(); i++)
	{
		if(visited[adj[s][i]] == false)
		{
			dfs(adj[s][i]);
		}
	}
}

int main()
{
	long long int n,e,i,u,v,k=0,cc=0;
	n = get_i();
	e = get_i();
	long long int a[e+e];

	for(i=0; i<n+1; i++)
	{
		visited[i] = false;
		adj[i].clear();
	}

	for(i=0; i<e; i++)
	{
		u = get_i();
		v = get_i();

		a[k] = u;
		k++;
		a[k] = v;
		k++;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for(i=1; i<=n; i++)
	{
		if( (visited[i] == false) && (adj[i].size() >= 0) )
		{
			dfs(i);
			cc++;
		}
	}
 
	if (n == 1)
	{
		cout << "NO\n";
		return 0;
	}

	for(i=1; i<=n; i++)
	{
		//cout << "i hai:" << i << ", cc hai:" << cc <<"\n";
		if( ( (adj[i].size() & 1) != 0)  || (cc != 1) )//if( ( (adj[i].size() & 1) != 0) && (adj[i].size() > 0) || (cc != 1) )
		{
			cout << "NO\n";
			return 0;
		}
	}

	cout << "YES\n";
	for(i=0; i<k; i+=2)
	{
		cout << a[i] << " " << a[i+1] << "\n";
	}
	return 0;
}*/

/*
5 6
1 2
2 3
3 4
2 4
2 5
1 5

*/

/*#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

static long int get_i();
vector <long long int> adj[100001];
long long int a[200001], b[200001],p=0;
bool visited[100001];

void dfs(long long int s)
{
	visited[s] = true;
	for(long long int i=0; i<adj[s].size(); i++)
	{
		if(visited[adj[s][i]] == false)
		{
			dfs(adj[s][i]);
		}
	}
}

int main()
{
	long long int n,i,u,v,e,k=0,temp;
	n = get_i();
	e = get_i();

	for(i=0; i<100001; i++)
	{
		visited[i] = false;
		adj[i].clear();
	}
	for(i=0; i<e; i++)
	{
		u = get_i();
		v = get_i();
		adj[u].push_back(v);
		adj[v].push_back(u);
		a[k] = u;
		k++;
		a[k] = v;
		k++;
	}
	dfs(1);
	for(i=1; i<=n; i++)
	{
		if( (visited[i] == false) || (adj[i].size() & 1 != 0) )
		{
			cout << "NO\n";
			return 0;
		}
	}
	
	for(i=0; i<k; i+=2)
	{
		if(i == 0)
		{
			b[i] = a[i];
			b[i+1] = a[i+1];
		}
		else
		{
			if(a[i-1] == a[i])
			{
				b[i] = a[i];
				b[i+1] = a[i+1];
			}
			else
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;

				if(a[i-1] == a[i])
				{
					b[i] = a[i];
					b[i+1] = a[i+1];
				}
			}
		}
	}

	cout << "YES\n";
	for(i=0; i<k; i+=2)
		cout << b[i] << " " << b[i+1] << "\n";
	return 0;
}

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
}*/

/*
int main()
{
	long long int n,e,i,u,v,k=0,temp,f1=1,f2=1;
	n = get_i();
	e = get_i();
	vector <long long int> adj[n+1];
	long long int a[e+e], b[e+e], c[e+e], d[e+e];

	for(i=0; i<e; i++)
	{
		u = get_i();
		v = get_i();

		a[k] = u;
		c[k] = v;
		k++;
		a[k] = v;
		c[k] = u;
		k++;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for(i=0; i<n; i++)
	{
		if( (adj[i].size() & 1) != 0 )
		{
			cout << "NO\n";
			return 0;
		}
	}

	for(i=0; i<k; i+=2)
	{
		if(i == 0)
		{
			b[i] = a[i];
			b[i+1] = a[i+1];
		}
		else
		{
			if(a[i-1] == a[i])
			{
				b[i] = a[i];
				b[i+1] = a[i+1];
			}
			else
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;

				if(a[i-1] == a[i])
				{
					b[i] = a[i];
					b[i+1] = a[i+1];
				}
				else
				{
					f1 = 2;
					break;
				}
			}
		}
	}
	if( (b[0] != b[k-1]) && (f1 != 2) )
		f1 = 2;

	if( f1 == 2 )
	{
		for(i=0; i<k; i+=2)
		{
			if(i == 0)
			{
				d[i] = c[i];
				d[i+1] = c[i+1];
			}
			else
			{
				if(c[i-1] == c[i])
				{
					d[i] = c[i];
					d[i+1] = c[i+1];
				}
				else
				{
					temp = c[i];
					c[i] = c[i+1];
					c[i+1] = temp;

					if(c[i-1] == c[i])
					{
						d[i] = c[i];
						d[i+1] = c[i+1];
					}
					else
					{
						f2 = 2;
						break;
					}
				}	
			}
		}
	}
	
	if( (d[0] != d[k-1]) && (f2 != 2) )
		f2 = 2;
	
	if( f1 == 1 )
	{
		cout << "YES\n";
		for(i=0; i<k; i+=2)
			cout << b[i] << " " << b[i+1] << "\n";
		return 0;
	}
	if( f2 == 1 )
	{
		cout << "YES\n";
		for(i=0; i<k; i+=2)
			cout << d[i] << " " << d[i+1] << "\n";
		return 0;
	}
	cout << "NO\n";
	return 0;
}*/