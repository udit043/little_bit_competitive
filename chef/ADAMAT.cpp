#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);
int a[65][65];

int main()
{
	int t, n, i, j, k, c;
	bool flag;
	sd(t);
	while(t--)
	{
		flag = true;
		c=0;
		sd(n);
		for(i=0; i<n; i++)
			for(j=0; j<n; j++)
				sd(a[i][j]);

		for(j=n-1; j>=1; j--)
		{
			if(a[0][j] != j+1)
			{
				if(flag == false)
					continue;
				else
				{
					flag = false;
					c++;
				}
			}
			else
			{
				if(flag == false)
					c++;
				flag = true;
			}
		}
		pd(c);
	}
	return 0;
}

/*
1
4
1 2 9 13
5 6 10 14
3 7 11 15
4 8 12 16

2
*/

/*
//(i−1)⋅N+j .

1 2    1 2 3   1  2  3  4    1  2  3  4  5
3 4    4 5 6   5  6  7  8    6  7  8  9  10
       7 8 9   9  10 11 12   11 12 13 14 15
               13 14 15 16   16 17 18 19 20
                             21 22 23 24 25
*/