#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);
int a[100002];

int main()
{
	int t, n, i, c;
	sd(t);
	while(t--)
	{
		c=0;
		sd(n);
		for(i=0; i<n; i++)
			sd(a[i]);
		sort(a, a+n);
		for(i=0; i<n-1; i++)
		{
			if(a[i] != a[i+1])
				c++;
		}
		c++;
		if(a[0] == 0)
			c--;

/*		if((c == 0) && (a[0] == 0))
			c=0;
		else if((c == 1) && (a[n-1] == 1))
			c=1;
		else if(a[0] = 0)
			c--;
		else
			c++;
*/		pd(c);
	}
	return 0;
}

/*
1
3
1 2 3

3
*/