#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

ll n, i, j, a[100002];
int main()
{
	int t;
	sd(t);
	while(t--)
	{
		j=0;
		sll(n);
		for(i=0; i<n; i++)
		{
			sll(a[i]);
			j += (a[i]-1);
		}
		pll(j+1);
	}
	return 0;
}

/*
2
4
1 1 1 1
2
1 4

1
4
*/