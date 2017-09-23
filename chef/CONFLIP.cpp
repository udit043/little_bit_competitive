#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		int g;
		sd(g);
		while(g--)
		{
			ll i,n,q,k;
			sll(i); sll(n); sll(q);

			if(i & 1)
			{
				if(n & 1)
				{
					if(q & 1)
					{
						k = n/2;
						printf("%lld\n", k);
					}
					else
					{
						k = n - n/2;
						printf("%lld\n", k);
					}
				}
				else
				{
					if(q & 1)
					{
						k = n - n/2;
						printf("%lld\n", k);
					}
					else
					{
						k = n/2;
						printf("%lld\n", k);
					}
				}
			}

			else
			{
				if(!(n & 1))
				{
					if(q & 1)
					{
						k = n/2;
						printf("%lld\n", k);
					}
					else
					{
						k = n - n/2;
						printf("%lld\n", k);
					}
				}
				else
				{
					if(q & 1)
					{
						k = n - n/2;
						printf("%lld\n", k);
					}
					else
					{
						k = n/2;
						printf("%lld\n", k);
					}
				}
			}
		}
	}
	return 0;
}

/*
1
2
1 5 1
1 5 2

2
3
*/