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
		ll n,k,i,m=INT_MAX,num;
		sll(n); sll(k);
		for(i=0; i<n; ++i)
		{
			sll(num);
			m = min(num, m);
		}
		if(k-m > 0)
			printf("%lld\n", k-m);
		else
			printf("0\n");
	}
	return 0;
}