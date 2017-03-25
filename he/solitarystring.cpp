#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sc(x) scanf(" %c", &x)
#define MAX 1000007
#define MOD 1000000007

int main()
{
	ll t;
	sll(t);
	while(t--)
	{
		ll i,y,n=0,len; string s;
		cin >> s;
		len = s.length();
		vector<ll> a[26];

		for(i=0; i<len; ++i)
		{
			a[(s[i]-97)].push_back(i);
		}

		for(i=0; i<26; ++i)
		{
			if(a[i].size() > 0)
			{
				n = max(n, a[i][a[i].size()-1] - a[i][0] );
			}
		}

		if(n != 0)
			printf("%lld\n", n-1);
		else
			printf("-1\n");
	}
	return 0;
}