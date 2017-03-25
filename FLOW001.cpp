#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long int a,sum;
		cin >> a;
		sum = a;
		cin >> a;
		sum += a;
		cout << sum << "\n";
	}
	return 0;
}