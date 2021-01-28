#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

//int a[101];
int main()
{
	int t, n, k, d, dd, i, j, a, s;
	sd(t);
	while(t--)
	{
		s=0;
		sd(n);	sd(k);	sd(d);
		for(i=0; i<n; i++)
		{
			sd(a);
			s = s + a;
		}
		dd = s/k;
		if(dd >= d)
			pd(d);
		else
			pd(dd);
	}
	return 0;
}

/*
5
1 5 31
4
1 10 3
23
2 5 7
20 36
2 5 10
19 2
3 3 300
1 1 1

0
2
7
4
1
*/