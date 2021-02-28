#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);
int a[5], w[5], l[5];

int main()
{
	int t, n, count, ctr, i, j, k, c;
	sd(t);
	while(t--)
	{
		fill_n(a, 5, 0);
		count=0;
		sd(n);
		for(i=0, c=0; i<n; i++)
		{
			sd(w[i]);
			if(w[i] == 1)
			{
				a[0] = i+1;
				c++;
			}
		}
		for(i=0; i<n; i++)
			sd(l[i]);

		f:
		for(i=0; i<n; i++)
		{
			if(c != n)
			{
				if((w[i] == c+1))
				{
					if((i+1) > a[c-1])
					{
						a[c] = (i+1);
						c++;
					}
					else
					{						
						k=i+1; ctr=0;
						do
						{
							k += l[i];
							ctr++;

						}while(k <= a[c-1]);
						count += ctr;
						a[c] = k;
						c++;
					}
				}
			}
		}
		if(c != n)
		{
			goto f;
		}
		pd(count);
	}
	return 0;
}

/*
3
3
3 1 2
1 4 5
3
3 2 1
1 1 1
4
2 1 4 3
4 1 2 4

3
6
5
*/