#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int main()
{
	int t, x, y, i, j, n, k;
	sd(t);
	while(t--)
	{
		k=0;
		sd(x);	sd(y);
		for(i=x+y+1; ;i++)
		{
			k=0;
			for(j=2; j<= i/2; j++)
			{
				if(i % j == 0)
				{
					k=1;
					break;
				}
			}

			if(k == 1)
			{
				k=0;
			}
			else if(k == 0)
			{
				pd(i-x-y);
				break;
			}
		}
	}
	return 0;
}

/*
2
1 3
4 3

1
4
*/