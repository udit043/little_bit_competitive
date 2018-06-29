// amey helped
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
	int t, n, a[1003], i, j, f=0;
	sd(t);
	while(t--)
	{
		f=0;
		memset(a, 0, sizeof(a));
		sd(n);
		for(i=0; i<n; ++i)
		{
			sd(a[i]);
		}
		for(i=0; i<n-1; ++i)
		{
			if(__gcd(a[i], a[i+1]) == 1)
			{
				f=0;
				break;
			}
			else
			{
				f=1;
			}
		}
		if(f == 1)
			cout << "-1\n";
		else
			cout << "0\n";
	}
	return 0;
}

/*
2
2
2 3
2
2 4

0
-1
*/