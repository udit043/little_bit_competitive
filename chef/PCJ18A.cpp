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
	int t, n;
	ll a, x, i;
	bool f;
	sd(t);
	while(t--)
	{
		f = false;
		sd(n);	sll(x);
		for(i=0; i<n; i++)
		{
			sll(a);
			if(a >= x)
				f = true;
		}
		if(f)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

/*
3
5 100
11 22 33 44 55
5 50
10 20 30 40 50
5 45
12 24 36 48 60

NO
YES
YES
*/