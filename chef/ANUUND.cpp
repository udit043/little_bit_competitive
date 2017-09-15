#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d ", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld ", x)

ll a[mx], b[mx];

int main()
{
	ll t;
	sll(t);
	while(t--)
	{
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));

		ll n, i, j, k;
		sll(n);

		for(i=0; i<n; ++i)
		{
			sll(a[i]);
		}
		sort(a, a+n);
		j=0; k=n-1;
		for(i=0; i<n; ++i)
		{
			if(i & 1)
				pll(a[k--]);
			else
				pll(a[j++]);
		}
		printf("\n");
	}
	return 0;
}

/*
2
2
3 2
3
10 5 2

2 3
2 10 5
*/