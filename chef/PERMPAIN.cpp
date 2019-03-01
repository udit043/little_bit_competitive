// wrong
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

long long fast_power(long long base, long long power)
{
	long long result = 1;
	while(power > 0)
	{
		if(power & 1)
		{ 
			result = (result*base) % MOD;
		}
		base = (base * base) % MOD;
		power >>= 1;
	}
	return result;
}

ll gcd(ll a, ll b) 
{ 
	if (a == 0) 
		return b%MOD; 
	return gcd((b % a)% MOD, a% MOD); 
}

int main()
{
	ll A, B;
	int t, n, a, b;
	sd(t);
	while(t--)
	{
		sd(n);	sd(a);	sd(b);
		A = fast_power(n, a) - 1;
		B = fast_power(n, b) - 1;
		pll(((gcd(A % MOD,B % MOD))%MOD + 1)%MOD);
	}
	return 0;
}

/*
2
2 1 1
3 1 2

2
3
*/