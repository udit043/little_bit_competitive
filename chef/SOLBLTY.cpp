#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int main()
{
	int t, x, a, b, c;
	sd(t);
	while(t--)
	{
		sd(x);	sd(a);	sd(b);
		c = (a + (100 - x)*b)*10;
		pd(c);
	}
	return 0;
}

/*
3
40 120 1
35 120 2
40 115 3

1800
2500
2950
*/