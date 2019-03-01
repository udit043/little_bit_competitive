#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int w[102]; int h[102]; int p[102]; int a[102];
int main()
{
	int t, n, b, i, ans;
	sd(t);
	while(t--)
	{
		ans = -1;
		sd(n);	sd(b);
		for(i=0; i<n; i++)
		{
			sd(w[i]);	sd(h[i]);	sd(p[i]);
			a[i] = w[i]*h[i];
		}
		for(i=0; i<n; i++)
		{
			if(p[i] <= b)
			{
				ans = max(ans, a[i]);
			}
		}
		if(ans == -1)
			printf("no tablet\n");
		else
			printf("%d\n", ans);
	}
	return 0;
}

/*
3
3 6
3 4 4
5 5 7
5 2 5
2 6
3 6 8
5 4 9
1 10
5 5 10

12
no tablet
25
*/