#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define inf 99999999
#define sll(x) scanf("%lld", &x)

ll a[mx];

int main()
{
	ll t;
	sll(t);
	while(t--)
	{
		ll n, d, i, sm=0;
		sll(n); sll(d);
		for(i=0; i<n; ++i)
			sll(a[i]);
		sort(a, a+n);
		for(i=n-1; i>0; --i)
		{
			if(a[i] - a[i-1] < d)
			{
				sm += a[i] + a[i-1] ;
				--i; 
			}
		}
		printf("%lld\n", sm);
	}
	return 0;
}