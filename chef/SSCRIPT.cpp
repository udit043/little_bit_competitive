#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int main()
{
	bool flag;
	int t, k, n, i, c;
	string s;
	sd(t);
	while(t--)
	{
		c=0;
		flag = false;
		cin >> k >> n;
		cin >> s;
		for(i=0; i<k; i++)
		{
			if(s[i] == '*')
			{
				c++;
				if(c >= n)
					flag = true;
			}
			else
				c=0;
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
5 2
*a*b*
5 2
*a**b
5 1
abcde

NO
YES
NO
*/