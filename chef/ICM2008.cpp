#include <bits/stdc++.h>
using namespace std;

#define mx 100002
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		ll a, b, c, d;
		sll(a);	sll(b);	sll(c); sll(d);
		double n = (((max(b,a)-min(b,a) * 1.0) / (max(c,d)-min(c,d))) + 1);

		if(c == d)
		{
			if(a == b)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
		{
			if((ceil(n) - floor(n)) == 0)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}

/*
2
3 4 1 2
10 20 3 7

YES
NO
*/

/*
		cout << n << "\n ";
		cout << fixed << setprecision(2) << n << "\n";
		cout << floor(n) << " .. " << ceil(n) << "\n";
*/