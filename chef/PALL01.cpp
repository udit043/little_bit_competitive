#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n,num,rev=0;
		cin >> num;
		n = num;
		while(n > 0)
		{
			rev = rev*10 + n%10;
			n = n/10;
		}
		if(num == rev)
			cout << "wins\n";
		else
			cout << "losses\n";
	}
	return 0;
}