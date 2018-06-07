#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d ", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld ", x)

int main()
{
	int t, x1, x2, y1, y2, xd, yd;
	sd(t);
	while(t--)
	{
		sd(x1);	sd(y1); sd(x2); sd(y2);

		xd = x1-x2;
		yd = y1-y2;

		if((xd != 0) && (yd != 0))
			printf("sad\n");

		else if((xd == 0) && (yd < 0))
			printf("up\n");

		else if((xd == 0) && (yd > 0))
			printf("down\n");

		else if((xd > 0) && (yd == 0))
			printf("left\n");

		else if((xd < 0) && (yd == 0))
			printf("right\n");
	}
	return 0;
}