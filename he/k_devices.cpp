#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n, k;
	cin >> n >> k;
	ll x[n], y[n], i;
	double a[n], r;

	for(i=0; i<n; ++i)
		cin >> x[i];

	for(i=0; i<n; ++i)
		cin >> y[i];

	for(i=0; i<n; ++i)
	{
		a[i] = sqrt(x[i]*x[i] + y[i]*y[i]);
	}

	sort(a, a+n);

//	for(i=0; i<n; ++i)
//		cout << a[i] << " ";
//	cout << "\n";

	cout << ceil(a[k-1]) << "\n";

	return 0;
}