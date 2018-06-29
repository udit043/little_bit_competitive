#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d ", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld ", x)

int  main()
{
	int t;
	ll a, b, n, num, i;
	sd(t);
	while(t--)
	{
		sll(a);	sll(b);	sll(n);

		if(n & 1)
		{
			a *= 2;
			--n;
		}
		num = n/2;
		for(i=1; i<=num; ++i)
		{
			a = a << 1;
			b = b << 1;
		}
		num = max(a,b)/min(a,b);
		pll(num);
		printf("\n");
	}
	return 0;
}

/*
3
1 2 1
3 2 3
3 7 2

1
3
2
*/