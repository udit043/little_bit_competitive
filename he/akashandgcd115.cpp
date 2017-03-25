// wrong incomplete
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sc(x) scanf(" %c", &x)
#define MAX 1000007
#define MOD 1000000007

ll tree[4*MAX];
ll ary[MAX];
ll gcdhcf[MAX];
ll pp[MAX],cc[MAX],gg[MAX];


void build(ll node, ll left, ll right)
{
	if(left == right)
	{
		tree[node] = primefactorswithgcd(ary[left]);
		return ;
	}

	ll mid = (left+right)/2;
	build(2*node, left, mid);
	build(2*node+1, mid+1, right);

	tree[node] = tree[2*node] + tree[2*node+1];
}

void pointupdate(ll node, ll left, ll right, ll p, ll val)
{
	if(left == right)
	{
		tree[node] = primefactorswithgcd(val);
		return; 
	}

	ll mid = (left+right)/2;
	if(p <= mid)
		pointupdate(2*node,left, mid,p,val );
	else
		pointupdate(2*node+1, mid+1, right,p,val);

	tree[node] = tree[2*node]+ tree[2*node + 1];
}

ll query(ll node, ll left, ll right, ll queryleft, ll queryright)
{
	if(queryright < left or queryleft > right)
		return 0;
	if(queryleft <= left and queryright >= right)
		return tree[node];

	ll mid = (left+right)/2;
	ll leftwaliquery =  query(2*node, left, mid, queryleft, queryright);
	ll rightwaliquery = query(2*node+1, mid+1, right, queryleft, queryright);

	return ( ((leftwaliquery % MOD) + (rightwaliquery % MOD)) % MOD);
}

int main()
{
	ll n,i,answer,t;
	sll(n);
	for(i=0; i<n; ++i)
		sll(ary[i]);
	build(1,0,n-1);
	sll(t);
	while(t--)
	{
		char c; ll lower,higher,index,newvalue,answer=0;
		sc(c);
		if(c == 'C')
		{
			sll(lower); sll(higher);
			answer = query(1,0,n-1,lower-1,higher-1);
			printf("%lld\n", answer);
		}
		else
		{
			sll(index); sll(newvalue);
			pointupdate(1,0,n-1,index-1,newvalue);
		}
	}
	return 0;
}

/*
3
3 4 3
6
C 1 2
C 1 3
C 3 3
U 1 4
C 1 3
C 1 2

*/

/*ll primefactorswithgcd(ll n)
{
	if(gg[n] != 0)
		return gg[n];

	ll i,j,h,k,sum,size,number=n;
	size = sqrt(n);	
	memset(pp, 0, sizeof pp);
	memset(cc, 0, sizeof cc);

	while (n%2 == 0)
	{
		pp[2]=2;
		cc[2]++;
		n = n/2;
	}

	for (i = 3; i <= size; i = i+2)
	{
		while (n%i == 0)
		{
			pp[i]=i;
			cc[i]++;
			n = n/i;
		}
	}

	if (n > 2)
	{
		pp[n]=n;
		cc[n]++;
	}

	ll gcd[number+1];

	for (i = 1; i <= number; i++) 
		gcd[i] = 1;

	for (i = 0; i < number+1; i++)
	{
		if( (pp[i] != 0) || (cc[i] != 0) )
		{
			for (j = 0, h = pp[i]; j < cc[i]; j++, h *= pp[i])
			{
				for (k = h; k <= number; k += h)
				{
					gcd[k] *= pp[i];
				}
			}
		}
	}

	sum = 0;
	for (i = 1; i <= number; i++) 
		sum += gcd[i];
	gg[number]=sum;
	return sum;
}*/

/*ll gcd(ll x)
{
	if(gcdhcf[x] != 0)
		return gcdhcf[x];

	ll res=0;
	for(ll i=1; i<=x; i++)
		res = ( (res + __gcd(i,x)) %MOD ); //( ((res % MOD) + (__gcd(i,x) % MOD) ) % MOD);
	gcdhcf[x] = res;
	return res;
}*/


	//pointupdate(1, 0, n-1, 0, 4);
	//ans = query(1,0,n-1,0,0);
	//prllf("%d\n",ans);
	/*ans = query(1,0,n-1,1,1);
	prllf("%d\n",ans);
	ans = query(1,0,n-1,1,2);
	prllf("%d\n",ans);
	for(i=0; i<3*n; ++i)
	prllf("%d %d\n",i,tree[i]);
	prllf("answer\n");

	ans = query(1,0,n-1,0,2);
	prllf("%d\n",ans);
	ans = query(1,0,n-1,0,1);
	prllf("%d\n",ans);
	for(i=0; i<3*n; ++i)
	prllf("%d %d\n",i,tree[i]);
	prllf("answer\n");

	ans = query(1,0,n-1,0,1); //yes 1st case
	prllf("%d\n",ans);
	ans = query(1,0,n-1,0,2); //yes 2nd case
	prllf("%d\n",ans);
	ans = query(1,0,n-1,2,2); //yes 3rd case
	prllf("%d\n\n",ans);*/