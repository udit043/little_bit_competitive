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
	int t, i, up, dw;
	string s;
	sd(t);
	while(t--)
	{
		up=dw=0;
		cin >> s;
		for(i=0; i<s.length(); i++)
		{
			if((s[i] == 'U') && (i == 0))
			{
				up = 1;
			}
			else if((s[i] == 'D') && (i == 0))
			{
				dw = 1;
			}

			else if((s[i] == 'U') && (i>0))
			{
				if(s[i-1] != 'U')
					up += 1;
			}
			else if((s[i] == 'D') && (i>0))
			{
				if(s[i-1] != 'D')
					dw += 1;
			}
		}
//		cout << up << " .. " << dw << "\n";
		cout << min(up, dw) << "\n";
 	}
	return 0;
}

/*
1
UUDDDUUU

1
*/