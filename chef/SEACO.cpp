#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
 
#define ll unsigned long long
#define MX 1000007
#define INF 1000000000000000LL
#define MOD 1000000007
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
 
ll a[100002], tree[4*100002], com[100002][3], n, ans[100002], b[100002];
 
void build(ll node, ll start, ll end)
{
	if(start == end)
	{
		tree[node] = a[start];
	}
	else
	{
		ll mid = (start+end)/2;
		build(2*node, start, mid);
		build(2*node+1, mid+1, end);
		tree[node] = tree[2*node] + tree[2*node+1];
	}
}
 
void updateRange(int node, int start, int end, int l, int r, int val)
{
	if (start > end or start > r or end < l)
		return;
 
	if (start == end)
	{
		tree[node] = (tree[node] + val) % MOD;
		a[start] = (a[start] + val) % MOD;
			return;
	}

	ll mid = (start + end) / 2;
	updateRange(node*2, start, mid, l, r, val);
	updateRange(node*2 + 1, mid + 1, end, l, r, val);
 
	tree[node] = tree[node*2] + tree[node*2+1];
}
 
void prin()
{
	for(ll k=0; k<n; ++k)
		cout << a[k]%MOD << " ";
	cout << "\n";
}
 
void typ(ll cm)
{
	ll ty, lt, rt, j;
	ty = com[cm][0];
	lt = com[cm][1];
	rt = com[cm][2];
 
	if(ty == 1)
	{
		updateRange(1, 0, n-1, lt-1, rt-1, 1);
	}
	else
	{
		for(j=lt; j<=rt; ++j)
		{
			if(com[j][0] == 1)
			{
				updateRange(1, 0, n-1, com[j][1]-1, com[j][2]-1, 1);
			}
			else
			{
				typ(j);
			}
		}
	}
}
 
int main()
{
	int t;
	sd(t);
	while(t--)
	{
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		memset(ans, 0, sizeof(ans));
		memset(tree, 0, sizeof(tree));
		memset(com, 0, sizeof(com));
 
		ll m,i,j,k, ty, lt, rt;
		sll(n); sll(m);
 
		build(1,0,n-1);
 
		for(i=1; i<=m; ++i)
		{
			sll(ty); sll(lt); sll(rt);
 
			com[i][0] = ty;
			com[i][1] = lt;
			com[i][2] = rt;
 
			if(ty == 1)
			{
				updateRange(1, 0, n-1, lt-1, rt-1, 1);
			}
			else
			{
				for(j=lt; j<=rt; ++j)
				{
					if(com[j][0] == 1)
					{
						updateRange(1, 0, n-1, com[j][1]-1, com[j][2]-1, 1);
					}
					else
					{
						typ(j);
					}
				}
			}
		}
		prin();
	}
	return 0;
} 

/*
3
5 5
1 1 2
1 4 5
2 1 2
2 1 3
2 3 4
1 2
1 1 1
1 1 1
10 10
1 1 10
2 1 1
2 1 2
2 1 3
2 1 4
2 1 5
2 1 6
2 1 7
2 1 8
2 1 9

*/