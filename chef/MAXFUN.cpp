#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);
int a[mx];

int main()
{
	long long int t, n, i, sm, x, y, z;
	sll(t);
	while(t--)
	{
		sll(n);
		for(i=0; i<n; i++)
			sll(a[i]);
		sort(a, a+n);
		x = a[0];		
		z = a[n-1];
		sm = 2*(z-x);
		pll(sm);
	}
	return 0;
}

/*
3
3
2 7 5
3
3 3 3
5
2 2 2 2 5

10
0
6
*/