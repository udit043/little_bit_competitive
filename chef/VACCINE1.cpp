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
	int d1, d2, v1, v2, p, i, vc=0;
	sd(d1);	sd(v1);	sd(d2);	sd(v2);	sd(p);
	for(i=1; ;i++)
	{
		if(d1 <= i)
			vc += v1;
		if(d2 <= i)
			vc += v2;
		if(vc >= p)
			break;
	}
	pd(i);
	return 0;
}

/*
1 2 1 3 14

3
*/

/*
5 4 2 10 100

9
*/