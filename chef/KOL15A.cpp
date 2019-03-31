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
	int t, i, j;
	ll k;
	string s;
	sd(t);
	while(t--)
	{
		k=0;
		cin >> s;
		for(i=0; i<s.length(); i++)
		{
			j = (int)s[i];
			if(j >= 49 && j <=57)
			{
				k += (j-48);
			}
		}
		pll(k);
	}
	return 0;
}

/*
1
ab1231da

7
*/