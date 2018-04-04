#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

int main()
{
	ll t;
	sll(t);
	while(t--)
	{
		ll x, y, i;
		sll(x); sll(y);

		i = __gcd(x, y);
		cout << 2*i << "\n";
	}
	return 0;
}

/*
3
5 3
10 10
4 8

2
20
8
*/