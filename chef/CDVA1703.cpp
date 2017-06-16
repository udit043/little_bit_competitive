#include <iostream>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		unsigned long long n,x;
		cin >> n >> x;
		if(n == x)
			cout << n << "\n";
		else
		{
			if(n%x != 0)
				cout << n%x << "\n";
			else
				cout << x << "\n";
		}
	}
	return 0;
}