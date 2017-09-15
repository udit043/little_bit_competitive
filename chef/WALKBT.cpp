#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long

ll a[mx];
ll tree[mx];
ll vis[mx];


void build(ll node, ll start, ll end);
ll pw(ll base, ll exp);

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		memset(a, 0, sizeof(a));
		memset(tree, 0, sizeof(a));
		memset(vis, 0, sizeof(a));

		ll n,q,m,x=0;
		cin >> n >> q;

		build(1,0,pw(2, n+1)-1);

		while(q--)
		{
			cout << "dalo\n";
			char c;
			cin >> c;

			if(c == '!')
			{
				cin >> m;
				ll bi[mx];
				memset(bi, 0, sizeof(bi));

				ll r, in=0, j, mr=0;

				x = (x + pw(2,m)) % pw(2,n);

				//x = ( ( (x % pw(2,n)) + (pw(2,c) % pw(2,n)) ) % pw(2,n)	);

				while( x != 0 )
				{
					r = x % 2;
					bi[in] = r;
					x /= 2;
					in++;
				}

				vis[mr] = true;

				for(j=in-1; j>=0; j--)
				{
					//cout << bi[j];
					if(bi[j] == 0)
					{
						mr = mr*2;
						vis[mr] = true;
					}
					else
					{
						mr = mr*2+1;
						vis[mr] = true;
					}
				}
			}
			else
			{
				cout << "kkk" ;
				ll qu, count = 0;
				for(qu = 1; qu <= pw(2, n+1)-1; ++qu )
				{
					if(vis[qu] == true)
						++count;
				}
				cout << count << "...\n";
			}
		}
	}
	return 0;
}

ll pw(ll base, ll exp)
{
	ll result = 1;
	while (exp)
	{
		if (exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}
	return result;
}

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
		build(2*node+1, mid+1,end);
		tree[node] = tree[2*node] + tree[2*node+1];
	}
}

//	x = (x + 2^c) mod 2^n
//	x = ( (x mod 2^n) + (2^c mod 2^n) ) mod 2^n