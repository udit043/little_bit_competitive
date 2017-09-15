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
	ll n,m,k,i,j,r,c,s,d;
	sll(n); sll(m); sll(k);
	ll a[n][m];

	for(i=0; i<n; ++i)
		for(j=0; j<m; ++j)
			sll(a[i][j]);

	while(k--)
	{
		sll(r); sll(c); sll(s); sll(d);
		for(i=r; i<r+s; ++i)
			for(j=c; j<c+s; ++j)
				a[i-1][j-1] += d;
	}

	for(i=0; i<n; ++i)
	{
		for(j=0; j<m; ++j)
		{
			printf("%lld ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
4 4 2
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
2 3 2 5
3 2 2 -3

*/