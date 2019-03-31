#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx); 

int main()
{
	int t, n, i, j, k;
	ll l;
	sd(t);
	while(t--)
	{
		j=0; k=0;
		sd(n);
		for(i=0; i<n; i++)
		{
			sll(l);
			if(l < 0)
				++j;
			else
				++k;
		}
		if(j == 0)
			printf("%d %d\n",k,k);
		else if(k == 0)
			printf("%d %d\n",j,j);
		else
			printf("%d %d\n",k, j);
	}
	return 0;
}

/*
1
5
5 2 4 6 7

5 5
*/

	/*while(t--)
	{
		j=0; k=0;
		sd(n);
		for(i=0; i<n; i++)
			sll(a[i]);

		sort(a, a+n);

		for(i=0; i<n; i++)
		{
			if(a[i] < 0)
				++j;
			else
				++k;
		}

		if(j == 0)
			printf("%d %d\n",k,k);
		else if(k == 0)
			printf("%d %d\n",j,j);
		else
			printf("%d %d\n",k, j);
	}*/