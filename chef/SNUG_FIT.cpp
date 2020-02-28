#include <bits/stdc++.h>
using namespace std;

#define mx 100002
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int main()
{
	ll t, n, i, sum, a[mx], b[mx];
	sll(t);
	while(t--)
	{
		sum=0;
		sll(n);
		
		for(i=0; i<n; i++)
			sll(a[i]);
		for(i=0; i<n; i++)
			sll(b[i]);

		sort(a, a+n);
		sort(b, b+n);

		for(i=0; i<n; i++)
		//for(i=n-1; i>=0; i--)
		{
			sum += min(a[i], b[i]);
		}
		pll(sum);
	}
	return 0;
}
/*
2
4
8 8 10 12
15 20 3 5
3
20 20 20
10 10 10

30
30
*/