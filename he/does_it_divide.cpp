#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

ll factorial(ll n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main()
{
	int t;
	ll n, s, m;
	sd(t);
	while(t--)
	{
		sll(n);
		s = (n*(n+1))/2;
		m = factorial(n);	
		if(m%s == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}