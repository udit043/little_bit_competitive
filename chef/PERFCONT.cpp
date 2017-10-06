#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

ll a[503];

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		memset(a, 0, sizeof (a));
		int n, i, r; ll p, ce=0, ch=0;
		sd(n); sll(p);
		for(i=0; i<n; ++i)
		{
			sll(a[i]);
			if(a[i] >= p/2)
				++ce;
			else if(a[i] <= p/10)
				++ch;
		}
		if((ce == 1) && (ch == 2))
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}

/*
6
3 100
10 1 100
3 100
11 1 100
3 100
10 1 10
3 100
10 1 50
4 100
50 50 50 50
4 100
1 1 1 1

yes
no
no
yes
no
no
*/