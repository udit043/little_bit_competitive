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
	int t, x1, x2, x3, y1, y2, y3, d12, d13, d23, c=0;
	sd(t);
	while(t--)
	{
		sd(x1); sd(y1);	sd(x2); sd(y2);	sd(x3); sd(y3);

		d12 = ( pow(abs(x2-x1), 2) + pow(abs(y2-y1), 2));
		d13 = ( pow(abs(x3-x1), 2) + pow(abs(y3-y1), 2));
		d23 = ( pow(abs(x3-x2), 2) + pow(abs(y3-y2), 2));

		if((d12) == ((d13) + (d23)) )
			++c;
		else if((d13) == ((d12) + (d23)) )
			++c;
		else if((d23) == ((d12) + (d13)) )
			++c;
	}
	pd(c);
	return 0;
}

/*
5
0 5 19 5 0 0
17 19 12 16 19 0
5 14 6 13 8 7
0 4 0 14 3 14
0 2 0 14 9 2

3
*/