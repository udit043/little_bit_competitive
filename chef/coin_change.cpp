#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int coin[12]; int a[12][31];
void ways(int coins, int value);

int main()
{
	int n, i, j, k, l, coins, value;
	cout << "Number of coins ";
	sd(n);
	cout << "Values of coins ";
	for(i=0; i<n; i++)
		sd(coin[i]);
	cout << "Required value ";
	sd(value);
	ways(n, value);
	pd(a[n-1][value]);
	return 0;
}

void ways(int coins, int value)
{
	int i, j, k, l, m;
	for(i=0; i<coins; i++)
	{
		a[i][0]=1;

		for(j=1; j<=value; j++)
		{

			if(j < coin[i])
			{
				if(i == 0)
					a[i][j]=0;
				else
					a[i][j]=a[i-1][j];
			}

			else
			{
				if(i == 0)
				{
					if(j%coin[i] == 0)
						a[i][j]=1;
					else
						a[i][j]=0;
				}
				else
					a[i][j]=a[i-1][j]+a[i][j-coin[i]];
			}
		}
	}
}

/*
4
1 3 5 7
8

ans - 6

4
2 3 5 10
7

ans - 2
*/

/*
	for(i=0; i<n; i++)
	{
		for(j=0; j<=value; j++)
		{
			cout << a[i][j] << "  ";
		}
		cout << "\n\n";
	}
*/