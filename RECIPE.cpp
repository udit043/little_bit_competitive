#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;
		long long int a[n],gc;
		for(int i=0; i<n; i++)
		{
			cin >> a[i];
		}
		gc=a[0];
		for(int i=1; i<n; i++)
		{
			gc = __gcd(gc,a[i]);
		}
		for(int i=0; i<n; i++)
		{
			cout << a[i]/gc << " ";
		}
		cout << "\n";
	}
	return 0;
}