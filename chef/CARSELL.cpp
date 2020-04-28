#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define mod 1000000007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);
 ll p[100002];

int main()
{
	int t, n, i, j;
	ll ans;
	sd(t);
	while(t--)
	{
		ans = 0;
		sd(n);
		for(i=0; i<n; i++)
		{
			sll(p[i]);
		}
		sort(p, p+n);
		for(i=n-1, j=0; i>=0; i--, j++)
		{
			if(p[i] > 0)
			{
				p[i] = p[i]-j;
				if(p[i] <= 0)
					p[i] = 0;
			}
		}
		for(i=0; i<n; i++)
		{
			ans = (((ans%mod) + (p[i]%mod))%mod);
		}
		pll(ans);
	}
	return 0;
}

/*
2
3
6 6 6
3
0 1 0

15
1
*/