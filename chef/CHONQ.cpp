#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

ll a[10001];
int main()
{
	int t;
	ll n, i, j, k, c;
	sd(t);
	while(t--)
	{
		sll(n);	sll(k);
		for(i=0; i<n; i++)
		{
			sll(a[i]);
		}
		for(i=0; i<n; i++)
		{
			c=0;
			for(j=0; j<n; j++)
			{
				c += floor((a[i+j])/(j+1));
				cout << i << "," << j << ":" << c << "\n";
			}
			if(c<=k)
			{
				pd(i);
			}
		}
	}
	return 0;
}

/*
1
3 3
1 2 3

1
*/