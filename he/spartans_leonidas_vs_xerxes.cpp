// FENWICK incomplete
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define mx 1e6+7

ll a[mx], tree[mx];

void build(ll node, ll start, ll end)
{
	if(start == end)
		tree[node] = a[start];
	else
	{
		ll mid = (start+end)/2;
		build(2*node, start, mid);
		build(2*node+1, mid+1, end);
		tree[node] = tree[2*node] + tree[2*node+1];
	}
}

void update(ll node, ll start, ll end, ll idx, ll val)
{
	if(start == end)
	{
		tree[node] += val;
		a[start] += val;
	}
	else
	{
		ll mid = (start + end);
		if(start <= idx and idx <= mid)
			update(2*node, start, mid, idx, val);
		else
			update(2*node+1, mid+1, end, idx, val);
		tree[node] = tree[2*node] + tree[2*node+1];
	}
}


ll query(ll node, ll start, ll end, ll l, ll r)
{
	if(r < start or end < l)
	{
		return 0;
	}

	if(l <= start and end <= r)
	{
		return tree[node];
	}

	ll mid = (start+end)/2;
	ll p1 = query(2*node  , start, mid, l, r);
	ll p2 = query(2*node+1, mid+1, end, l, r);
	return (p1 + p2);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		memset(tree, 0, sizeof(tree));

		ll n,q,i;
		for(i=0; i<n; ++i)
			cin >> a[i];

		while(q--)
		{
			ll qt, x, y;
			cin >> qt >> x >> y;

			if(qt == 1)
				update(1,0,n-1,x,y);
			else
				cout << query(1,0,n-1,x,y) << "\n";
		}
	}

	return 0;
}