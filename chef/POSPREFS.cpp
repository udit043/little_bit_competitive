#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d ", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int a[1001];
int main()
{
	int t, k, n, i, j;
	sd(t);
	while(t--)
	{
		sd(n);	sd(k);

		for(i=0; i<n; i++)
			a[i] = ((i+1)*(-1));

		if(k == 1)
		{
			a[0] = 1;
			for(i=0; i<n; i++)
			{
				pd(a[i]);
			}
		}
		else if(k == n)
		{
			for(i=0; i<n; i++)
			{
				pd(a[i] * (-1));
			}
		}
		else
		{
			j=1;
			for(i=0; i<n && j<=k; i++)
			{
				if(i & 1)
				{
					a[i] = (a[i] * (-1));
					j++;
				}
				//cout << " i " << i << "\n";
			}
			//cout << " j hai " <<j << "\n";
			for(i=n-1; i>=0 && j<=k; i--)
			{
				if(i%2 == 0)
				{
					a[i] = (a[i] * (-1));
					j++;
				//	cout << "i " << i << "\n";
				}
				//cout << "han\n";
			}
			//cout << " j hai last mai " <<j << "\n";
			for(i=0; i<n; i++)
				pd(a[i]);
		}
		printf("\n");
	}
	return 0;
}

/*
11
3 3
10 1
10 2
10 3
10 4
10 5
10 6
10 7
10 8
10 9
10 10

1 2 3
1 -2 -3 -4 -5 -6 -7 -8 -9 -10
-1 2 -3 4 -5 -6 -7 -8 -9 -10
-1 2 -3 4 -5 6 -7 -8 -9 -10
-1 2 -3 4 -5 6 -7 8 -9 -10
-1 2 -3 4 -5 6 -7 8 -9 10
-1 2 -3 4 -5 6 -7 8 9 10
-1 2 -3 4 -5 6 7 8 9 10
-1 2 -3 4 5 6 7 8 9 10
-1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10
*/