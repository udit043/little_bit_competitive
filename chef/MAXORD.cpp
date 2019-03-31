#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int main()
{
	int n, i, k, o=0, a=0;
	sd(n);
	for(i=0; i<n; i++)
	{
		sd(k);
		o = (o|k);
		a = max(a, k);
	}
	cout << a << " " << o << "\n";
	return 0;
}

/*
4
1 3 5 4

5 7
*/