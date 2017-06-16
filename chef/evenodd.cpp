#include <bits/stdc++.h>
using namespace std;
#define LOG2(X) ((unsigned) (8*sizeof (unsigned long long) - __builtin_clzll((X)) - 1))
int main()
{
	int t;
	cin >> t;
	if(t & 1)
	{
		cout << "Odd\n";
		cout << "multiplied by 2 " << (t<<1);
	}
	else
	{
		cout << "Even\n";
		cout << "divied by 2 " << (t>>1);
		cout << LOG2(t) ;
	}
	cout << "\n";
	return 0;
}