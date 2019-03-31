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
	int t, tt, f;
	ll i, j, k, len;
	string s, ss;
	sd(t);
	for(tt=1; tt<=t; tt++)
	{
		cin >> s;
		ss=s;
		len = s.length();
		for(i=len-1, j=len-1; i>=0, j>=0; i--, j--)
		{
			if(s[i] == '4')
			{
				s[i] = '2';
				ss[j] = '2';
				//cout << "..\n";
			}
			else
				ss[j] = '0';
		}
		cout << "Case #" << tt << ": " << s << " ";
		f=0;
		for(i=0; i<len; i++)
		{
			if(ss[i] != '0')
			{
				f=1;
			}
			if(f == 1)
				cout << ss[i];
		}
		cout << "\n";
	}
	return 0;
}