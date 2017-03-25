#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long double q,p;
		cin >> q >> p;
		cout << fixed << setprecision(6);

		if(q > 1000)
			cout << p*q - p*q/10;
		else
			cout << p*q;
		cout << "\n";
	}
	return 0;
}