#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

int main()
{
	int t, n;
	sd(t);
	while(t--)
	{
		cout.precision(9);
		cout << fixed;
		sd(n);
		long double p, d, x, q, r=0;
		while(n--)
		{
			cin >> p >> q >> d;
			x = ((d*d)/100)*(p/100);
			//cout << "x : " << x << "\n";
			r += x*q;
		}
		cout << r << "\n";
	}
	return 0;
}

/*
2
2
100 5 10
100 1 50
3
10 10 0
79 79 79
100 1 100

30.000000000
3995.0081000
*/