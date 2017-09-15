// Wrong
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long n, i, g1 ,g2;
	cin >> n;
	long a[n];

	for(i=0; i<n; ++i)
		cin >> a[i];

	g1 = __gcd(a[n-1], a[n-2]);

	for(i=n-3; i>=0; --i)
	{
		g2 = __gcd(a[i], g1);

		if(g2 >= g1)
		{
			g1 = g2;
		}
		else
		{

			cout << i+1 << "..\n";
			return 0;
		}
	}
	cout << "0\n";

	return 0;
}