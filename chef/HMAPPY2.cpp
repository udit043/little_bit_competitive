#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d ", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld ", x)

ll n, a, b, k, ca, cb, cl;

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		n = a = b = k = ca = cb = cl = 0;
		sll(n);	sll(a);	sll(b);	sll(k);

		ca = (n/a);
		cb = (n/b);
		cl = (n/((a*b)/__gcd(a, b)));

		ca = ca-cl;
		cb = cb-cl;

		if((ca+cb) >= k)
			printf("Win\n");
		else
			printf("Lose\n");
	}
	return 0;
}

/*
1
6 2 3 3

Win
*/