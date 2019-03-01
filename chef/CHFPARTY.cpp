#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int a[100003];
int main()
{
	int t, n, i, k;
	sd(t);
	while(t--)
	{
		k=0;
		sd(n);
		for(i=0; i<n; i++)
			sd(a[i]);
		sort(a, a+n);
		for(i=0; i<n; i++)
		{
			if(a[i] <= k)
				++k;
		}
		pd(k);
	}
	return 0;
}

/*
3
2
0 0
6
3 1 0 0 5 5
3
1 2 3

2
4
0
*/