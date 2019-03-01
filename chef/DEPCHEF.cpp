#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

ll a[103], d[103], t, n, i, j, k;

int main()
{
	sd(t);
	while(t--)
	{
		k=0;
		sll(n);

		for(i=1; i<=n; ++i)
			sll(a[i]);

		a[i] = a[1];
		a[0] = a[i-1];

		for(i=1; i<=n; ++i)
			sll(d[i]);

		d[i] = d[1];
		d[0] = d[i-1];

		for(i=1; i<=n; ++i)
		{
			if(d[i] > (a[i+1] + a[i-1]))
			{
				k=max(k, d[i]);
			}
		}
		if(k == 0)
			printf("-1\n");
		else
			pll(k);
	}
	return 0;
}

/*
2
4
1 1 4 1
3 4 2 1
7
5 4 5 4 5 4 5
3 2 4 7 2 5 9

3
-1
*/