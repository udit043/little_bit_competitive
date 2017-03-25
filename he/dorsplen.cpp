#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	unsigned long long a[3],mn=0,mn1=0,mn2=0,res=0;
	cin >> a[0] >> a[1] >> a[2];
	
	sort(a, a+3);
	
	res = a[0];
	mn = a[0];

	a[1] = a[1] - a[0];
	a[2] = a[2] - a[0];

	if(a[1] % 2 == 0)
	{
		res = res + a[1]/2;
	}
	else
	{
		res = res + a[1]/2 + 1;
	}

	if(a[2] % 2 == 0)
	{
		res = res + a[2]/2;
	}
	else
	{
		res = res + a[2]/2 + 1;
	}

	a[2] = a[2] - a[1];
	mn = mn + a[1];

	if(a[2] % 2 == 0)
	{
		mn1 = a[2]/2;
	}
	else
	{
		mn1 = a[2]/2 + 1;
	}

	mn2 = a[2];

	mn = mn + min(mn1, mn2);

	cout << min(res, mn) << "\n";
	return 0;
}

/*
	mn = min(r, min(g,b));
	res = mn;
	r -= mn;
	g -= mn;
	b -= mn;
	
	if( r%2 == 0)
		res = res + r/2;
	else
		res = res + r/2 +1;

	if( g%2 == 0)
		res = res + g/2;
	else
		res = res + g/2 +1;

	if( b%2 == 0)
		res = res + b/2;
	else
		res = res + b/2 +1;

	cout << res << "\n";
*/