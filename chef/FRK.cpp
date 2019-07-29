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
	int t, i, c=0;
	bool f;
	string s;
	sd(t);
	while(t--)
	{
		f = false;
		cin >> s;
		for(i=0; i<s.length(); i++)
		{
			if(s[i] == 'c')
			{
				if(i+1 < s.length())
				{
					if(s[i+1] == 'h')
					{
						f = true;
						break;
					}
				}
			}
			if(s[i] == 'h')
			{
				if(i+1 < s.length())
				{
					if(s[i+1] == 'e')
					{
						f = true;
						break;
					}
				}
			}
			if(s[i] == 'e')
			{
				if(i+1 < s.length())
				{
					if(s[i+1] == 'f')
					{
						f = true;
						break;
					}
				}
			}
		}
		if(f)
			c++;
	}
	cout << c << "\n";
	return 0;
}

/*
4
gennady.korotkevich
kefaa
fhlasek
chemthan

3
*/