#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int c=0;
	int b=0;

	while (n--)
	{
		cin >> b;
		if ( b % 2 == 0)
			c+=1;
		else
			c-=1;
	}

	if ( c > 0)
		cout << "READY FOR BATTLE\n";
	else
		cout << "NOT READY\n";

	return 0;
}