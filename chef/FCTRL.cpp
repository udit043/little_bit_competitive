#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long

int main()
{
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		ll n, i, q, c=0;
		scanf("%lld",&n);
		for(i=5; ; i*=5)
		{
			q = n/i;
			if(q > 0)
				c += q;
			else
				break;
		}
		cout << c << "\n";
	}
}

/*
6
3
60
100
1024
23456
8735373

0
14
24
253
5861
2183837
*/