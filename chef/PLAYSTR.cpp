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
	int t, n, i, a, b;
	string s;
	sd(t);
	while(t--)
	{
		a=b=0;
		sd(n);
		cin >> s;
		for(i=0; i<n; i++)
		{
			if(s[i] == '1')
				a++;
		}
		cin >> s;
		for(i=0; i<n; i++)
		{
			if(s[i] == '1')
				b++;
		}
		if(a == b)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

/*
2
5
11000
01001
3
110
001

YES
NO
*/