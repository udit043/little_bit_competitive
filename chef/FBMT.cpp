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
	int t, n, i, c1, c2;
	string s, s1, s2;
	sd(t);
	while(t--)
	{
		c1=c2=0;
		sd(n);
		for(i=0; i<n; i++)
		{
			cin >> s;
			if(i == 0)
			{
				s1 = s;
				c1++;
			}
			else
			{
				if(s1 == s)
					c1++;
				else
				{
					s2 = s;
					c2++;
				}
			}
		}
		if(c1 > c2)
			cout << s1 << "\n";
		else if(c1 < c2)
			cout << s2 << "\n";
		else
			cout << "Draw\n";
	}
	return 0;
}

/*
2
4
ab
bc
bc
ab
3
xxx
yyy
yyy

Draw
yyy
*/