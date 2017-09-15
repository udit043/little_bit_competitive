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
		if(a[start] % 2 == 0)
			tree[node] = 1;
		else
			tree[node] = 0;
		//tree[node] = a[start];
	}
	else
	{
		ll mid = (start+end)/2;

		build( 2*node   , start , mid);
		build( 2*node+1 , mid+1 , end);

		tree[node] = tree[2*node] + tree[2*node+1];
	}
}

void update(ll node, ll start, ll end, ll idx, ll val)
{
	if(start == end)
	{
		a[idx] = val;
		if(val % 2 == 0)
			tree[node] = 1;
		else
			tree[node] = 0;
		//tree[node] = val;
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
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);

	ll n, i, q, option, l, r, ans;
	cin >> n;

	for(i=0; i<n; ++i)
		cin >> a[i];

	build(1, 0, n-1);

//	for(i=0; i<n; ++i)
//		cout << a[i] << " ";
//	cout << "\n";

//	for(i=1; i<(2*n+2); ++i)
//		cout << "tree[" << i << "] : " << tree[i] << "\n";

	cin >> q;
	while(q--)
	{
		cin >> option >> l >> r;
		
		if(option == 0)
		{
			update(1, 0, n-1, l-1, r);
		}
		
		else if(option == 1)	//even
		{
			ans = query(1, 0, n-1, l-1, r-1);
			cout << ans << "\n";
		}

		else	//odd
		{
			ans = query(1, 0, n-1, l-1, r-1);
			cout << ( r - l + 1 - ans) << "\n";
		}
	}
	return 0;
}

/*
6
1 2 3 4 5 6
4
1 2 5
2 1 4
0 5 4
1 1 6

2
2
4
*/