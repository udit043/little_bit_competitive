#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);
int a[mx];

int main()
{
	int t, n, k, v, i, j, sum, tot;
	sd(t);
	while(t--)
	{
		sum = 0;
		sd(n);	sd(k);	sd(v);
		for(i=0; i<n; i++)
		{
			cin >> j;
			sum += j;
		}
		tot = v*(n+k);
		tot = tot - sum;
		if((tot % k == 0) && (tot > 0))
			printf("%d\n", tot/k);
		else
			printf("-1\n");
	}
	return 0;
}

/*
3
3 3 4
2 7 3
3 1 4
7 6 5
3 3 4
2 8 3

4
-1
-1
*/