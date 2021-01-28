#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int coin[354]; int a[354][354];
void min_coins(int coins, int value);

int main()
{
	int n, i, j, k, l, coins, value;
	cout << "Number of coins ";
	sd(n);
	cout << "Values of coins ";
	for(i=0; i<n; i++)
		sd(coin[i]);
	sort(coin, coin+n);
	cout << "Required value ";
	sd(value);
	min_coins(n, value);
	cout << "Min number of coin ";
	pd(a[n-1][value]);
	return 0;
}

void min_coins(int coins, int value)
{
	bool flag = true;
	int i, j, k, l, m;
	for(i=0; i<coins; i++)
	{
		for(j=0; j<=value; j++)
		{
			if(j < coin[i])
			{
				if(i == 0)
					a[i][j]=0;
				else
					a[i][j] = a[i-1][j];
			}
			else
			{
				if(i == 0)
					a[i][j] = 1 + a[i][j-coin[i]];
				else
					a[i][j] = min(a[i-1][j], 1 + a[i][j-coin[i]]);
			}
		}
	}
}

/*
3
1 2 5
11

ans - 3

3
5 10 25
30

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