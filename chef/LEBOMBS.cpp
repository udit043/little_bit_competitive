#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx); 

int main()
{
	int t, n, i, j;
	string s;
	sd(t);
	while(t--)
	{
		j=0;
		sd(n);
		cin >> s;
		for(i=0; i<n; i++)
		{
			if(s[i] == '0')
			{
				if((i==0) && (n>1))
				{
					if(s[i+1] == '0')
						++j;
				}
				else if(i==0 && n==1)
					++j;
				else if (i == n-1)
				{
					if(s[i-1] == '0')
						++j;
				}
				else
				{
					if((s[i-1] == '0') && (s[i+1] == '0'))
						++j;
				}
			}
		}
		pd(j);
	}
	return 0;
}

/*
3
3
010
5
10001
7
0000000

0
1
7
*/

		/*for(i=0; i<n; i++)
		{
			if(s[i] == '1')
			{
				if((i == 0) && (n > 1))
					s[i+1] = '2';
				else if(i == n-1)
					s[i-1] = '2';
				else
				{
					s[i-1] = '2';
					s[i+1] = '2';
				}
			}
		}
		for(i=0; i<n; i++)
		{
			if(s[i] == '0')
				++j;
		}*/