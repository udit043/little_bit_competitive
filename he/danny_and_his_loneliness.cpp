#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

ll a[mx];

int main()
{
	memset(a, 0, sizeof (a));
	ll t, i, n, m=0;
	sll(t);
	t = 2*t+1;
	for(i=0; i<t; ++i)
	{
		sll(n);
		m ^= n;
	}
	printf("%lld\n", m);
	return 0;
}

/*
2
1 2 3 2 1

3
*/