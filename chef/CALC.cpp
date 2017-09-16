// editorial parabola
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
		ll n, b, i, k;
		sll(n);	sll(b);
		k = (n+b)/(b+b);
		cout << k*(n-k*b) << "\n";
	}
	return 0;
}

/*
3
10 2
8 5
6 1

12
3
9
*/

/*	TLE
		for(i=1; i<=n; ++i)
		{
			e = n-i;
			if(e%b == 0)
			{
				k = max(k, i*e/b);
			}
		}
*/