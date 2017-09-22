#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

ll a[mx];

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		int n, i;	ll k=1000000002;
		sd(n);
		for(i=0; i<n; ++i)
			sll(a[i]);
		sort(a, a+n);
		for(i=1; i<n; ++i)
		{
			k = min(k, a[i]-a[i-1]);
		}
		printf("%lld\n", k);
	}
	return 0;
}

/*
1
5
4 9 1 32 13

3
*/