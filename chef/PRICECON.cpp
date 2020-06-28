#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);
ll a[mx], b[mx];

int main()
{
	int t, n, p, i, j, k, d;
	sd(t);
	while(t--)
	{
		k=d=0;
		sd(n);	sd(p);
		for(i=0; i<n; i++)
		{
			sd(j);
			k += j;
			if(j > p)
				d += p;
			else
				d += j;
		}
		printf("%d\n",k-d);
	}
	return 0;
}

/*
3
5 4
10 2 3 4 5
7 15
1 2 3 4 5 6 7
5 5
10 9 8 7 6

7
0
15
*/