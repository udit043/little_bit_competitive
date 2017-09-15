// wrong
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
	//tree[node] = tree[2*node] + tree[2*node+1];
}

int main()
{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
	memset(a, 0, sizeof(a));

	ll n, q, i, op, l, r, val, in, k, cnt, jmp, index;
	cin >> n >> q;

	for(i=0; i<n; ++i)
		cin >> a[i];

	build(1, 0, n-1);

//	for(i=0; i<n; ++i)
//		cout << a[i] << " ";
//	cout << "\n";

	while(q--)
	{
		cin >> op;
		if(op == 1)
		{
			cnt = 0;	jmp = 0;
			cin >> in >> k;

			index=in-1;
			for(i=in-1; i<n; ++i)
			{
				if((a[i+1] > a[index]) && ( i+1 - index <= 100 ) )
				{
					++jmp;
					index = i+1;
					//cout << "hello\n";
				}
				if((jmp == k) || (i-index > 100))
				{
					//cout << "hi\n";
					break;
				}
			}
			cout << index+1 << "\n";
		}
		else
		{
			cin >> l >> r >> val;
			updateRange(1, 0, n-1, l-1, r-1, val);

//			for(i=0; i<n; ++i)
//				cout << a[i] << " ";
//			cout << "\n";
		}
	}

	return 0;
}

/*
5 3
1 2 3 4 5
1 1 2
2 3 4 -1
1 1 2

3
4
*/

/*
		for(i=0; i<n; ++i)
			cout << a[i] << " ";
		cout << "\n";
		
		for(i=1; i<(2*n+2); ++i)
			cout << "tree[" << i << "] : " << tree[i] << "\n";
*/