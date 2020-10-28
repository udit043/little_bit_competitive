#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int a[4];
int main()
{
	int t, n, i, b1, b2;
	
	sd(t);
	while(t--)
	{
		sd(n);
		for(i=0; i<n; i++)
			sd(a[i]);
		if(n == 1)
			pd(a[0]);
		else if(n == 2)
			pd(max(a[0], a[1]));
		else
		{
			sort(a, a+n);
			if(n == 3)
			{
				b1 = a[2];
				b2 = a[1];
				if(b1 >= b2)
				{
					b2 = b2 + a[0];
					if(b1 >= b2)
						pd(b1);
					else
						pd(b2);
				}
			}
			else
			{
				b1 = a[n-1];
				b2 = a[i-2];
				for(i=n-3; i>=0; i--)
				{
					if(b1 >= b2)
					{
						b2 = b2 + a[i];
					}
					else
					{
						b1 = b1 + a[i];
					}
				}
				pd(max(b1, b2));
			}
		}
	}
	return 0;
}

/*
3
3
2 2 2
3
1 2 3
4
2 3 4 5

4
3
7
*/