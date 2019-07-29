#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx); 

int main()
{
	int t, n, i, c;
	string s;
	sd(t);
	while(t--)
	{
		c=0;
		sd(n);
		cin >> s;
		for(i=0; i<n-1; i++)
		{
			if((s[i] != 'a') && (s[i] != 'e') && (s[i] != 'i') && (s[i] != 'o') && (s[i] != 'u'))
			{
				if((s[i+1] == 'a') || (s[i+1] == 'e') || (s[i+1] == 'i') || (s[i+1] == 'o') || (s[i+1] == 'u'))
					c++;
			}
		}
		printf("%d\n", c);
	}
	return 0;
}

/*
3
6
bazeci
3
abu
1
o

3
1
0
*/