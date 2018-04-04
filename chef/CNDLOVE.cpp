#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

int a[1002];

int main()
{
	int t, i, j, n;
	sd(t);
	while(t--)
	{
		j=0;
		memset(a, 0, sizeof(a));
		sd(n);
		for(i=0; i<n; ++i)
		{
			sd(a[i]);
			j += a[i];
		}
		if(j & 1)
		{
			if(j >= 3)
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}

/*
1
2
5 2

YES
*/