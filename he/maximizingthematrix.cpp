// wrong imcomplete
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sc(x) scanf(" %c", &x)
#define MAX 1000007
#define MOD 1000000007

int main()
{
	ll n,k,i,j,t;
	sll(n); sll(k);
	ll a[n][n], b[n][n];
	for(i=0; i<n; ++i)
		for(j=0; j<n; ++j)
			sll(a[i][j]);
	for(i=0; i<n; ++i)
		for(j=0; j<n; ++j)
			sll(b[i][j]);
	t = pow(2,n);
	j=1;
	if(t<k)
	{
		printf("%lld\n", t);
		for(i=1; i<=t; ++i)
		{
			if(i > n)
			{
				++j;
				t = t - i + 1;
				i = 1;
			}
			printf("%lld %lld\n", i, j);
		}
	}
	else
	{
		printf("%lld\n", k);
		for(i=1; i<=k; ++i)
		{
			if(i > n)
			{
				++j;
				t = t - i + 1;
				i = 1;
			}
			printf("%lld %lld\n", i, j);
		}
	}
	return 0;
}