#include <bits/stdc++.h>

#define ll long long
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sc(x) scanf(" %c", &x)
#define MAX 1000007
#define MOD 1000000007

using namespace std;

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		ll n,i;
		sll(n);
		ll a[n];
		for(i=0; i<n; ++i)
			sll(a[i]);
		sort(a, a+n);
		for(i=0; i<n-1; ++i)
		{
			if( (a[i+1]-a[i]) != 1)
				break;
		}
		if(i==0)
			printf("%lld\n", a[i]);
		else
			printf("%lld\n", a[i+1] );
	}
	return 0;
}

/*
4
5
45 42 46 48 47
3
7 7 8
8
12 156 157 158 159 160 161 162
4
8 7 10 6

*/