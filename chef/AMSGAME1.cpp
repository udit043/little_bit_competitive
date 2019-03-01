#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx); 
int a[1001];
int main()
{
	int t, n, i, j, k;
	sd(t);
	while(t--)
	{
		sd(n);
		for(i=0; i<n; i++)
		{
			sd(a[i]);
		}
		j=a[0];
		for(i=1; i<n; i++)
		{
			j = __gcd(j, a[i]);
		}
		pd(j);
	}
	return 0;
}

/*
3
2
10 12
2
5 9
3
6 10 15

2
1
1
*/