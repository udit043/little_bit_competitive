#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);
int hlt[mx], decr[mx], ans[mx];

int main()
{
	int t, n, m, i, j;
	sd(t);
	while(t--)
	{
		fill_n(ans, mx, mx);
		sd(n);	sd(m);

		for(i=0; i<n; i++)
			sd(hlt[i]);

		for(i=0; i<m; i++)
			sd(decr[i]);

		for(j=1; j<=m; j++)
		{
//			cout << "j hai " << j << "\n";
			for(i=j; i<=n; i=i+j)
			{
//				cout << "i hai " << i << "\n";
				if(((i) % (j)) == 0)
				{
//					cout << "han andr\n";
					if((hlt[i-1] - decr[j-1]) <= 0)
					{
//						cout << "yo \n";
						ans[i-1] = min(ans[i-1], j);
						//j=m;
					}
				}
			}
		}

		/*for(i=0; i<n; i++)
		{
			for(j=0; j<m; j++)
			{
				if(i < j)
					j=m;
				if(((i+1) % (j+1)) == 0)
				{
					if((hlt[i] - decr[j]) <= 0)
					{
						ans[i] = j+1;
						j=m;
					}
				}
			}
		}*/
		for(i=0; i<n; i++)
		{
			if(ans[i] != mx)
				pd(ans[i]);
			else
				printf("-1\n");
		}
	}
	return 0;
}

/*
2
6 5
2 1 6 4 3 7
2 3 7 3 4
3 3
2 1 3
2 2 2

1
1
3
-1
5
3
1
1
-1
*/