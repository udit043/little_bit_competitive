#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx); 

int main()
{
	int t, i, j;
	ll n, a, b, d1, d2;
	sd(t);
	while(t--)
	{
		a = 1000000000;
		b = 0;
		sll(n);
		for (i=1; i<=sqrt(n); i++) 
		{ 
			if (n%i == 0) 
			{ 
				if (n/i == i) 
				{
					d1 = abs(a-b);
					d2 = 0;
					if(d2 <= d1)
					{
						a = i;
						b = i;
					}
				}
				else
				{
					d1 = llabs(a-b);
					d2 = llabs(i-(n/i));
					if(d2 <= d1)
					{
						a = i;
						b = n/i;
					}
				}
			} 
		}
		pll(d2);
	}
	return 0;
}

/*
4
20
13
8
4

1
12
2
0
*/