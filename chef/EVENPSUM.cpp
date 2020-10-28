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
	int t, a, b, e1, e2, o1, o2, ans;
	sd(t);
	while(t--)
	{
		ans=0;
		sd(a);	sd(b);
		if(a&1)
		{
			e1 = a/2;
			o1 = e1+1;
		}
		else
		{
			e1 = o1 = a/2;
		}
		if(b&1)
		{
			e2 = b/2;
			o2 = e2+1;
		}
		else
		{
			e2 = o2 = b/2;
		}
		pd(e1*e2 + o1*o2);
	}
	return 0;
}

/*
4
1 1
2 3
4 6
8 9

1
3
12
36
*/