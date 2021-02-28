#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int main()
{
	int n;
	sd(n);
	for(int i=10; i>=1; i--)
	{
		if(n%i == 0)
		{
			pd(i);
			break;
		}
	}
	return 0;
}

/*
24

8
*/