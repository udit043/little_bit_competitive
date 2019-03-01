#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld ", x)
//fill_n(a, 102, mx);

int main()
{
	ll n, k;
	int t;
	sd(t);
	while(t--)
	{
		sll(n);	sll(k);
		if(k == 0)
			cout << "0 " << n << "\n";
		else
		{
			pll(n/k); pll(n%k);
			printf("\n");
		}
	}
	return 0;
}

/*
2
10 2
100 3

5 0
33 1
*/