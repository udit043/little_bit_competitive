#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int main()
{
	ll n, c, i, k=0;
	sll(n);
	for(i=0; i<n; i++)
	{
		sll(c);
		k += c;
	}
	if((n*(n+1)/2) == k)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}

/*
5
7 4 1 1 2

YES

5
1 1 1 1 1

NO
*/