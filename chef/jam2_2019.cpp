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
	int t, tt, n, i;
	string s;
	sd(t);
	for(tt=1; tt<=t; tt++)
	{
		cin >> n;
		cin >> s;
		printf("Case #%d: ", tt);
		for(i=0; i<s.length(); i++)
			if(s[i] == 'E')
				printf("S");
			else
				printf("E");
		printf("\n");
	}
	return 0;
}