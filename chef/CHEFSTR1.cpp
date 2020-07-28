#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int main()
{
	int t;
	ll n, i, ans, a[100002];
	sd(t);
	while(t--)
	{
		ans=0;
		sll(n);
		for(i=0; i<n; i++)
			sll(a[i]);
		for(i=0; i<n-1; i++)
		{
			ans += abs(a[i+1]-a[i]);
			ans--;
		}
		cout << ans << "\n";
	}
	return 0;
}

/*
2
6
1 6 11 6 10 11
4
1 3 5 7

15
3
*/