#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int b,ta,sa=4;
		cin >> b;
		b /= 2 ;
		cout << (b*b - b)/2 << "\n";
	}
	return 0;
}