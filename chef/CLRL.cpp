#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long
#define inf 99999999
#define sll(x) scanf("%lld", &x)
#define sd(x) scanf("%d", &x)

ll a[mx];

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		bool flag = true;
		memset(a, 0, sizeof(a));
		ll n, rt, i, big=1111111111, small=0;
		sll(n); sll(rt);

		for(i=0; i<n; ++i)
			sll(a[i]);

		for(i=0; i<n-1; ++i)
		{
			if(a[i] > rt)
			{
				big = min(a[i], big);
				if(a[i] != big)
				{
					flag = false;
					break;
				}
			}
			else
			{
				small = max(a[i], small);
				if(a[i] != small)
				{
					flag = false;
					break;
				}
			}
		}
		if(flag == false)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}

/*
2
5 200
600 300 100 350 200
5 890
5123 3300 783 1111 890

NO
YES
*/