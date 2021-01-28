// wrong

#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int h[4001];
int main()
{
	int t, n, k, i, j, a, b, p, q, c, ma, mb;
	sd(t);
	while(t--)
	{
		a=b=ma=mb=0;
		sd(n);	sd(k);
		for(i=0; i<n; i++)
			sd(h[i]);
		sort(h, h+n);
		for(i=n-1, c=0; i>=0; i--)
		{
			if(a<k)
			{
				if(c == 0)
				{
					a += h[i];
					c=1;
					ma++;
					continue;
				}
			}
			else if(a >= k)
				c=1;
			if(b<k)
			{
				if(c == 1)
				{
					b += h[i];
					c=0;
					mb++;
				}
			}
			else if(b >= k)
				c=0;
		}

		if((a < k) || (b < k))
			cout << "-1\n";
		else
			cout << ma + mb << "\n";
	}
	return 0;
}

/*
2
8 38
7 8 19 7 8 7 10 20
4 5
2 10 4 9

7
2
*/