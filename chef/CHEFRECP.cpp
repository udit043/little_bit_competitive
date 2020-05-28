// wrong
#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);
ll a[1001], b[1001], c[1001];

int main()
{
	int t, n, i, j, d;
	sd(t);
	while(t--)
	{
		fill_n(b, 1001, 0);
		bool flag;
		sd(n);
		for(i=0; i<n; i++)
		{
			sd(a[i]);
		}
		for(i=0; i<n; i++)
		{
//			if(a[i] != a[i+1])
			{
				d = i - b[a[i]];
				if((d == i) or (d == 1))
				{
					flag = true;
					b[a[i]] = i;
				}
				else
				{
					flag = false;
					break;
				}
			}
			{
				c[a[i]]++;
			}
		}
		sort(c, c+1001);
		for(i=0; i<1001; i++)
		{
			if((c[i] == c[i+1]) and (c[i] != 0))
			{
				flag = false;
				break;
			}
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

/*
3
6
1 1 4 2 2 2
8
1 1 4 3 4 7 7 7
8
1 7 7 3 3 4 4 4

YES
NO
NO
*/