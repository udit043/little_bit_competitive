#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007

ll a[mx];
ll tree[mx];

void build(ll node, ll start, ll end)
{
	if(start == end)
		tree[node] = a[start];
	else
	{
		ll mid = (start+end)/2;
		build(2*node, start, mid);
		build(2*node+1, mid+1, end);

		tree[node] = min(tree[2*node], tree[2*node+1]);
	}
}

void update(ll node, ll start, ll end, ll idx, ll val)
{
	if(start == end)
	{
		a[idx] = val;
		tree[node] = val;
	}
	else
	{
		ll mid = (start+end)/2;

		if(start <= idx and idx <= mid)
		{
			update(2*node  , start, mid, idx, val);
		}
		else
		{
			update(2*node+1, mid+1, end, idx, val);
		}
		tree[node] = min(tree[2*node], tree[2*node+1]);
	}
}

ll query(ll node, ll start, ll end, ll l, ll r)
{
	if(r < start or end < l)
	{
		return mx;
	}

	if(l <= start and end <= r)
		return tree[node];

	ll mid = (start+end)/2;
	ll p1 = query(2*node  , start, mid, l, r);
	ll p2 = query(2*node+1, mid+1, end, l, r);
	return min(p1, p2);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, q, i;
	cin >> n >> q;

	for(i=0; i<n; ++i)
		cin >> a[i];

	build(1,0, n-1);

	while(q--)
	{
		char in; ll in1, in2;
		cin >> in >> in1 >> in2;

		if(in == 'q')
			cout << query(1,0,n-1,in1-1,in2-1) << "\n";
		else
			update(1,0,n-1,in1-1,in2);
		
	}

	return 0;
}

/*
5 5
1 5 2 4 3
q 1 5
q 1 3
q 3 5
u 3 6
q 1 5

1
1
2
1
*/