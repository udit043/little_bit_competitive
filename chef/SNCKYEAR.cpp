#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

// fill_n(a, 201, 9);

int main()
{
	int t, n;
	sd(t);
	while(t--)
	{
		sd(n);
		if((n == 2010) || (n == 2015) || (n == 2016) || (n == 2017) || (n == 2019))
			cout << "HOSTED\n";
		else
			cout << "NOT HOSTED\n";
	}
	return 0;
}

/*
2
2019
2018

HOSTED
NOT HOSTED
*/