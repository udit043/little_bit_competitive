#include <iostream>
#include <cstdio>

#define ll long long
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sc(x) scanf(" %c", &x)
#define MAX 1000007
#define MOD 1000000007

using namespace std;

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		ll n, i, s1=0, s2=0;
		sll(n);
		ll a[n], b[n];
		for(i=0; i<n; ++i)
			sll(a[i]);
		for(i=0; i<n; ++i)
			sll(b[i]);
		for(i=0; i<n; ++i)
		{
			if(i & 1)
				s1 += a[i];
			else
				s1 += b[i];
			if(i & 1)
				s2 += b[i];
			else
				s2 += a[i];
		}
		printf("%lld\n", min(s1, s2));
	}
	return 0;
}