#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int main()
{
	int t, n, i, c, a, b;
	sd(t);
	while(t--)
	{
		c=0;
		sd(n);
		for(i=0; i<n; i++)
		{
			sd(a);	sd(b);
			if(b-a > 5)
				c++;
		}
		printf("%d\n", c);
	}
	return 0;
}

/*
1
5
1 3
4 4
4 10
1 11
2 7

2
*/