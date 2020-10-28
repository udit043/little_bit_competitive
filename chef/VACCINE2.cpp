#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

//int a[10003];
int main()
{
	int t, n, d, i, a, r, nr, ans;
	sd(t);
	while(t--)
	{
		r=nr=ans=0;
		sd(n);	sd(d);
		for(i=0; i<n; i++)
		{
			sd(a);
			if((a <= 9) || (a >= 80))
				++r;
			else
				++nr;
		}
		if(r != 0)
		{
			ans = r/d;
			if(r%d != 0)
				ans++;
		}
		if(nr != 0)
		{
			ans += nr/d;
			if(nr%d != 0)
				ans++;
		}
		pd(ans);
	}
	return 0;
}

/*
2
10 1
10 20 30 40 50 60 90 80 100 1
5 2
9 80 27 72 79

10
3
*/

/*
		if( ((r%d + nr%d) > 0) && ((r%d + nr%d) <= d) )
			ans++;
		if( ((r%d + nr%d) > 0) && ((r%d + nr%d) > d) )
			ans += 2;
*/