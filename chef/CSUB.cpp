#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int main()
{
	ll t, n, i, c;
	string s;
	sll(t);
	while(t--)
	{
		c=0;
		sll(n);
		cin >> s;
		for(i=0; i<n; i++)
		{
			if(((int)s[i]-48) == 1)
				++c;
		}
		c = (c*(c+1)/2);
		pll(c);
	}
	return 0;
}

/*
2
4
1111
5
10001

10
3
*/