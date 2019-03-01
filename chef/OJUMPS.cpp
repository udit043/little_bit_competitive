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
	ll a;
	sll(a);
	if(((a%6) == 3) || ((a%6) == 1) || ((a%6) == 0))
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}