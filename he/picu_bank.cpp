#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d ", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int main()
{
	int t;
	sd(t);
	ll d, m, x, b, a, rem, count, i, mcount, div, tot;
	while(t--)
	{
		count = 0;
		mcount = 1;
		sll(d); sll(a); sll(m); sll(b); sll(x);
		rem = x-d;

		tot = a*m + b;
		div = rem/tot;

		if(div >= 1)
		{
			count += (div*m + div);
			rem = rem - div*tot;
		}

		tot = a*m;
		div = rem/tot;

		if(div == 1)
		{
			count +=  div*m;
			rem = rem - div*tot;
		}

		div = rem/a;
		count += div;

		rem = rem - div*a;

		if(rem > 0)
			++count;

		pll(count);
	}
	return 0;
}

/*
2
2 5 4 3 51
2 5 4 3 46

11
10

13
2 5 4 3 51
2 5 4 3 46
2 5 4 3 20
2 5 4 3 1
2 5 4 3 37
3 6 3 5 60
5 8 5 4 70
10 6 7 5 80
20 15 10 8 100
50 40 35 15 150
0 3 4 5 12
2 5 4 3 112
0 5 1 4 100


*/