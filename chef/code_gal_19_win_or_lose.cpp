#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int s[1001], e[1001];
int main()
{
	int t, n, i, f;
	sd(t);
	while(t--)
	{
		f=1;
		sd(n);
		for(i=0; i<n; i++)
		{
			sd(s[i]);
		}
		for(i=0; i<n; i++)
		{
			sd(e[i]);
		}
		sort(s, s+n);
		sort(e, e+n);
		for(i=0; i<n; i++)
		{
			//cout << s[i] << " .. " << e[i] << "\n";
			if(e[i] <= s[i])
			{
				f=0;
				break;
			}
		}
		if(f == 0)
			printf("LOSE\n");
		else
			printf("WIN\n");
	}
	return 0;
}

/*
1
6
112 243 512 343 90 478 
500 789 234 400 452 150

WIN
*/

/*
2
6
10 20 50 100 500 400 
30 20 60 70 90 490 
5
10 20 30 40 50 
40 50 60 70 80

LOSE
WIN
*/