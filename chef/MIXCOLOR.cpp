#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)
int a[mx];
int main()
{
	int t;
	sd(t);
	while(t--)
	{
		memset(a, 0, sizeof(a));
		int n, i, f=0;
		sd(n);
		for(i=0; i<n; ++i)
		{
			sd(a[i]);
		}
		sort(a, a+n);
		for(i=0; i<n-1; ++i)
		{
			if(a[i] == a[i+1])
				++f;
		}
		printf("%d\n", f);
	}
	return 0;
}

/*
2
3
1 2 3
3
2 1 2

0
1
*/