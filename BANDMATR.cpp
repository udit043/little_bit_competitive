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
	int t;
	sd(t);
	while(t--)
	{
		ll n,j,i,count=0,k=0,minus;
		sll(n);
		ll a[n][n], diagonal=n;
		for(i=0; i<n; ++i)
		{
			for(j=0; j<n; ++j)
			{
				sll(a[i][j]);
				if(a[i][j] == 1)
					++count;
			}
		}
		count = count - diagonal;
		if(count > 0)
		{
			for(i=diagonal-1; i>0; --i)
			{
				++k;
				minus = i*2;
				count = count - minus;
				if(count <= 0)
					break;
			}
			printf("%lld\n", k);
		}
		else
			printf("0\n");
	}
	return 0;
}