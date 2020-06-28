#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);
ll a[mx], b[mx];

int main()
{
	int t, n, i, j, c;
	string s;	bool flag;
	sd(t);
	while(t--)
	{
		c = 0;
		cin >> s;
		for(i=0; i<s.length()-1; i++)
		{
			flag = false;

			if(s[i] == 'x')
			{
				if(s[i+1] == 'y')
					flag = true;
			}
			if(s[i] == 'y')
			{
				if(s[i+1] == 'x')
					flag = true;
			}
			if(flag)
			{
				c++;
				i++;
			}
		}
		cout << c << "\n";
	}
	return 0;
}

/*
3
xy
xyxxy
yy

1
2
0
*/