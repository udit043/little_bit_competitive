#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d ", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld ", x)

int main()
{
	int t;
	ll n, a, b, x, y, a1, a2;
	sd(t);
	while(t--)
	{
		sll(n);	sll(a);	sll(b);
		
		x = (n*b)/(a+b);
		y = (n*a)/(a+b);

		a1 = (a*x*x + b*(n-x)*(n-x));
		a2 = (a*(n-y)*(n-y) + b*y*y);

		if(a1 < a2)
			printf("%lld\n", a1);
		else
			printf("%lld\n", a2);
	}
	return 0;
}

/*
2
5 1 2
10 2 4

17
134
*/