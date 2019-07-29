#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int main()
{
	int t, n, i, c, m;
	bool f;
	string s;
	sd(t);
	while(t--)
	{
		c=m=0;
		f = true;
		sd(n);
		for(i=0; i<n; i++)
		{
			cin >> s;
			if(s == "cookie")
			{
				c++;
			}
			else
			{
				if(c >= 1)
					c--;
			}
			if(c >= 2)
				f = false;
		}
		if(s == "cookie")
			f = false;
		if(f)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

/*
4
7
cookie milk milk cookie milk cookie milk
5
cookie cookie milk milk milk
4
milk milk milk milk
1
cookie

YES
NO
YES
NO
*/