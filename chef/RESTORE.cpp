#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d ", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int a[mx];
int main()
{
	int t, n, i, j;
	sd(t);
	while(t--)
	{
		sd(n);
		for(i=0; i<n; i++)
		{
			//sd(b[i]);
			sd(j);
			a[i] = n - j + 2;
		}
		for(i=0; i<n; i++)
			pd(a[i]);
		printf("\n");
	}
	return 0;
}

/*
2
5
5 2 3 4 5
4
4 4 4 4

2 6 5 3 4
2 6 3 12
*/