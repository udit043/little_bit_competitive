#include <bits/stdc++.h>
using namespace std;

// #define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int main()
{
	int t, n[20], c[20], td[20][20], i, j, k, l, mn, mx, p, u, y;
	sd(t);
	while(t--)
	{
		mn=20; mx=0;
		sd(k);
		for(i=0; i<k; i++)
			sd(n[i]);
		for(i=0; i<k; i++)
		{
			for(j=0; j<20; j++)
			{
				td[i][j] = ((i+1) + j*n[i]);
			}
		}
		mn = 20; mx = 0;
		for(p=0; p<k; p++)
		{
			for(y=0; y<20; y++)
				c[y] = 0;
			c[p] = 1;
			for(j=0; j<20; j++)
			{
				for(i=0; i<k; i++)
				{
					if(c[i] == 1)
					{
						for(l=0; l<k; l++)
						{
							if(td[i][j] == td[l][j])
								c[l] = 1;
						}
					}
				}
			}
			u=0;
			for(y=0; y<20; y++)
				u += c[y];
			cout << "u hai " << u << "\n";
			mn = min(u, mn);
			mx = max(u, mx);
		}
		cout << mn << " " << mx << "\n";
	}
	return 0;
}

/*
4
3
1 2 3
3
3 2 1
3
0 0 0
3
1 3 2

1 1
3 3
1 1
1 2
*/
/*
gm0 1091 6412 12100 x00
*/