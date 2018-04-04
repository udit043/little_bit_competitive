#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

int main()
{
	int t, i, f=0, fl;
	sd(t);
	while(t--)
	{
		int n;
		sd(n);
		int l[n+1], g[n+1];
		for(i=0; i<n; ++i)
			sd(l[i]);
		for(i=0; i<n; ++i)
			sd(g[i]);
		
		f=0;
		
		for(i=0; i<n; ++i)
		{
			if(l[i] <= g[i])
				fl=1;
			else
			{
				fl=0;
				break;
			}
		}
		if(fl == 1)
			f = 1;

		for(i=0; i<n; ++i)
		{
			if(l[i] <= g[n-i-1])
				fl=2;
			else
			{
				fl=0;
				break;
			}
		}
		if(fl == 2)
			f += 2;

		if(f == 0)
			printf("none\n");
		else if(f == 1)
			printf("front\n");
		else if(f == 2)
			printf("back\n");
		else if(f == 3)
			printf("both\n");
	}
	return 0;
}

/*
4
3
1 2 3
2 3 4	
3
1 2 1
1 2 1
3
3 2 1
1 2 3
4
1 3 2 4
1 2 3 5

front
both
back
none
*/