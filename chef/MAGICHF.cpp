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
	int t, i, j, n, s, x, a, b;
	sd(t);
	while(t--)
	{
		sd(n);	sd(x);	sd(s);
		for(i=0; i<s; i++)
		{
			sd(a);	sd(b);
			if(x == a)
				x = b;
			else if(x == b)
				x = a;
		}
		printf("%d\n", x);
	}
	return 0;
}

/*
1
5 2 4
4 2
3 4
3 2
1 2

1
*/