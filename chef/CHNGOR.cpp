#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 1000007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		ll n, a, k=0, i;
		sll(n);
		for(i=0; i<n; ++i)
		{
			sll(a);
			k |= a;
		}
		cout << k << "\n";
	}
	return 0;
}