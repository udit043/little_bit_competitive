#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld", x)
//fill_n(a, 102, mx); 
ll a[1000], b[1000];

int main()
{
	int t, d, i, j, k;
	ll n;
	sd(t);
	while(t--)
	{
		i=0;
		sll(n); sd(d);
		while(n != 0)
		{
			a[i] = n%10;
			++i;
			n/=10;
		}
		for(j=0; j<i; j++)
		{
			if(a[j] > d)
				a[j] = d;
		}
		for(j=i-1, k=0; j>=0; j--, k++)
		{
			b[k] = a[j];
		}

		for(j=0, k=0; j<i; j++)
		{
			if(b[j] != d)
			{
				a[k] = b[j];
				k++;
			}
		}
		for(j=k; j<i; j++)
			a[j]=d;

		for(j=i-1; j>0; j--)
		{
			if(a[j] < a[j-1])
			{
				a[j-1] = a[j];
				a[j] = d;
			}
		}

		sort(a, a+i);
		for(j=0; j<i; j++)
			pll(a[j]);

		printf("\n");
	}
	return 0;
}

/*
3
35 4
42 4
24 9

34
24
24
*/