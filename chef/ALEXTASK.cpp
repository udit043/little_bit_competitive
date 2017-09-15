#include <bits/stdc++.h>
using namespace std;

static long int get_i()
{
	char c=getchar();
	while(c<'0'||c>'9')
	c=getchar();
	long int ret=0;
	while(c>='0'&&c<='9')
	{
		ret=ret*10+c-'0';
		c=getchar();
	}
	return ret;
}

unsigned long long int gcd(unsigned long long int u, unsigned long long int v)
{
    long long int shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned long long int t = v;
            v = u;
            u = t;
        }  
        v = v - u;
    } while (v != 0);
    return u << shift;
}

int main()
{
	cout << 1e18 << "\n" << ULONG_MAX << "\n";
	/*int t;
	t = get_i();
	while(t--)
	{
		unsigned long long int i, n, j;
		n = get_i();
		unsigned long long int a[n], res = 1e18;

		for(i=0; i<n; i++)
		{
			a[i] = get_i();
		}

		for(i=0; i<n; i++)
		{
			for(j=i+1; j<n; j++)
				res = min(res, (a[i]*a[j]) / gcd(a[i],a[j]));
		}
		cout << res << "\n";
	}*/
	return 0;
}
/*
4
3
2 3 5
4
1 8 7 11
4
4 4 5 6
3
4 5 6

*/