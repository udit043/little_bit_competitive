#include <bits/stdc++.h>
using namespace std;
#define RESET   "\033[0m"
#define RED    "\033[1m\033[31m"
#define GREEN   "\033[1m\033[32m"
#define YELLOW  "\033[1m\033[33m"
#define BLUE    "\033[1m\033[34m"
bool is_integer(long double k)
{
	//long double check = (int)k;
	//long double ans = k-check;
	//cout << YELLOW << k << "," << BLUE << check << GREEN << ans << RESET << "\n";
	//if(ans == 0.0)
	//	return 1;
	//else
	//	return 0;
	//return (k == check);
	//cout << floor(k) << "\n";
	cout << YELLOW << k << "," << BLUE << ceil(k) << "," << RED << floor(k) << RESET << "\n"; 
		return ((ceil(k*1.0) == k) || (floor(k*1.0) == k));
}

int main()
{
	long long int t,i;
	cin >> t;
	while(--t+1)
	{
		long double n,m;
		long double val;
		cin >> n >> m;

		for(i=2; i<35; i++)
		{
			val = pow(m, 1.0/i);
			cout << i << " : " << val << "\n";
			if(is_integer(val))
				cout << GREEN << val << RESET << "\n";

		}

		//if(is_integer(val))
		//	cout << val << "\n";
		//else
		//	cout << "-1\n";
	}
	return 0;
}