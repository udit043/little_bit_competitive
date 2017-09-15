// TLE
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007

ll a[mx], tree[mx];

ll concatenate(ll x, ll y)
{
	ll pow = 10;
	while(y >= pow)
		pow *= 10;
	return x * pow + y;
}

ll binary_to_decimal(ll num)
{
	ll res = 0;
	for(ll i = 0; num > 0; ++i)
	{
		if((num % 10) == 2)
			res += (1 << i);
		num /= 10;
	}
	return res;
}

void build(ll node, ll start, ll end)
{
	if(start == end)
		tree[node] = a[start];
	else
	{
		ll mid = (start+end)/2;
		build(2*node, start, mid);
		build(2*node+1, mid+1, end);
		tree[node] = concatenate(tree[2*node], tree[2*node+1]);
		//tree[node] = tree[2*node] + tree[2*node+1];
	}
}

void update(ll node, ll start, ll end, ll idx)
{
	if(start == end)
	{
		if(a[idx] == 1)
		{
			a[idx] = 2;
			tree[node] = 2;
		}
	}
	else
	{
		ll mid = (start+end)/2;

		if(start <= idx and idx <= mid)
		{
			update(2*node  , start, mid, idx);
		}
		else
		{
			update(2*node+1, mid+1, end, idx);
		}
		tree[node] = concatenate(tree[2*node], tree[2*node+1]);
		//tree[node] = tree[2*node] + tree[2*node+1];
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

	if((p1 == 0) && (p2 == 0))
		return 0;
	if(p1 == 0)
		return p2;
	if(p2 == 0)
		return p1;
	return concatenate(p1, p2);
}

int main()
{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);

	ll n, i, q;
	cin >> n;
	string s;
	cin >> s;
	for(i=0; i<n; ++i)
		a[i] = int(s[i])-47;

	build(1,0,n-1);

	cin >> q;
	while(q--)
	{
		int in1, in2, in3;
		cin >> in1;

		if(in1 == 0)
		{
			cin >> in2 >> in3;
			cout << (binary_to_decimal( query(1,0,n-1,in2,in3) ) % 3 )<< "\n";
		}
		else
		{
			cin >> in2;
			update(1,0,n-1,in2);
		}
	}
	return 0;
}

/*
5
10010
6
0 2 4
0 2 3
1 1
0 0 4
1 1
0 0 3

2
1
2
1
*/

/*

	for(i=0; i<n; ++i)
		cout << a[i] << " ";
	cout << "\n";

	for(i=1; i<(2*n+2); ++i)
		cout << "tree[" << i << "] : " << tree[i] << "\n";

*/