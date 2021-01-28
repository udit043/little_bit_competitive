#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int main()
{
	int t, n, k, x, y;
	int x0, yx0,   y0, xy0,   xn, yxn,    yn, xyn;  
	sd(t);
	while(t--)
	{
		sd(n);	sd(k);
		sd(x);	sd(y);

		if(x>y)
		{
			xn = n;        // one
			yxn = n-x+y;

			y0 = 0;        // fourth
			xy0 = x-y;

			yn = xn;       // two
			xyn = yxn;

			x0 = y0;       // third
			yx0 = xy0;

			if(x == y)
				cout << n << " " << n << "\n";

			else if(k%4 == 1)
				cout << xn << " " << yxn << "\n";
			else if(k%4 == 2)
				cout << xyn << " " << yn << "\n";
			else if(k%4 == 3)
				cout << x0 << " " << yx0 << "\n";
			else if(k%4 == 0)
				cout << xy0 << " " << y0 << "\n";
		}
		else
		{
			yn = n;        // one
			xyn = n-y+x;

			x0 = 0;        // fourth
			yx0 = y-x;

			xn = yn;       // two
			yxn = xyn;

			y0 = x0;       // three
			xy0 = yx0;

			if(x == y)
				cout << n << " " << n << "\n";

			else if(k%4 == 1)
				cout << xyn << " " << yn << "\n";
			else if(k%4 == 2)
				cout << xn << " " << yxn << "\n";
			else if(k%4 == 3)
				cout << xy0 << " " << y0 << "\n";
			else if(k%4 == 0)
				cout << x0 << " " << yx0 << "\n";
		}
	}
	return 0;
}

/*
2
5 5 4 4
5 2 3 1

5 5
3 5
*/

/*
		cout << "x0, yx0 = " << x0 << " , " << yx0 << "\n";
		cout << "xn, yxn = " << xn << " , " << yxn << "\n";
		cout << "xy0, y0 = " << xy0 << " , " << y0 << "\n";
		cout << "xyn, yn = " << xyn << " , " << yn << "\n";
*/