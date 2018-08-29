#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d ", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld ", x)

int main()
{
	int al[26];
	ll n, i, cnt, pos;
	string s;
	sll(n);
	n=1;
	while(n--)
	{
		cnt=0; pos=0;
		memset(al, 0, sizeof(al));
		cin >> s;
		
		for(i=0; i<s.length(); ++i)
		{
			++al[((int)s[i]-97)];
		}

		for(i=0; i<26; ++i)
		{
			if(al[i] > cnt)
			{
				cnt = al[i];
				pos = i;
			}
		}
		cout << (s.length() - cnt) << "\n";
	}
	return 0;
}