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
	int t;
	float k1, k2, k3, v, k;
	sd(t);
	while(t--)
	{
		cin >> k1 >> k2 >> k3 >> v;
		k = k1 * k2 * k3 * v;
		k = 100/k;
		k = ((int)(k * 100 + .5) / 100.0);
		if(k*100 >= 958)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}

/*
3
1.0 1.0 1.0 10.45
1.0 1.0 1.0 10.44
1.0 1.0 0.9 10.44

YES
NO
NO
*/