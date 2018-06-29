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
	cout.precision(10);
	cout << fixed;
	int t, a, b, i, num;
	double ta, tb, n, p;
	sd(t);
	while(t--)
	{
		p=0;	ta=0;	tb=0;
		cin >> n;
		sd(a);
		sd(b);

		for(i=0; i<n; i++)
		{
			sd(num);
			if(num == a)
				++ta;
			if(num == b)
				++tb;
		}
		p = (ta/n) * (tb/n);
		cout << p << "\n";
	}
	return 0;
}