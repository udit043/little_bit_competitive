#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

ll t, a[102], n, k, k1, k2, i;
int main()
{
	sll(t);
	while(t--)
	{
		k1=0;k2=0;
		fill_n(a, 102, mx);

		sll(n);	sll(k);
		k = min(k, n-k);
		for(i=0; i<n; i++)
		{
			sll(a[i]);
			k1 += a[i];
		}
		sort(a, a+102);
		for(i=0; i<k; i++)
			k2 += a[i];
		k1 = k1-k2;
		cout << k1-k2 << "\n";
	}
	return 0;
}

/*
2
5 2
8 4 5 2 10
8 3
1 1 1 1 1 1 1 1

17
2
*/