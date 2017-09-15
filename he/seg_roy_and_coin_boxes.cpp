#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007

ll a[mx];
ll tree[mx];

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

int query(ll node, ll start, ll end, ll l, ll r)
{
	if(r < start or end < l)
		return 0;
	if(l <= start and end <= r)
		return tree[node];
	
	ll mid = (start+end)/2;
	ll p1 = query(2*node  , start, mid, l, r);
	ll p2 = query(2*node+1, mid+1, end, l, r);
	return p1+p2;
}

void updateRange(ll node, ll start, ll end, ll l, ll r, ll val)
{
	if(r < start or end < l or start > end)
		return ;

	if(start == end)
	{
		tree[node] += val;
		a[start] += val;
		return ;
	}

	ll mid = (start+end)/2;
	updateRange(2*node  , start, mid, l, r, val);
	updateRange(2*node+1, mid+1, end, l, r, val);
	tree[node] = tree[2*node] + tree[2*node+1];
}

int main()
{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
	memset(a, 0, sizeof(a));

	ll n, m, i, j, l, r, q, coin, cnt;
	cin >> n >> m;

	build(1, 0, n-1);

	while(m--)
	{
		cin >> l >> r;
		updateRange(1, 0, n-1, l-1, r-1, 1);
	}
	cin >> q;
	while(q--)
	{
		cnt = 0;
		cin >> coin;
		for(i=0; i<n; ++i)
			if(a[i] >= coin)
				++cnt;
		cout << cnt << "\n";
	}

	return 0;
}

/*
7
4
1 3
2 5
1 2
5 6
4
1
7
4
2

6
0
0
4
*/

/*
		for(i=0; i<n; ++i)
			cout << a[i] << " ";
		cout << "\n";
		
		for(i=1; i<(2*n+2); ++i)
			cout << "tree[" << i << "] : " << tree[i] << "\n";
*/