#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		double hrd,cc,ts;
		cin >> hrd >> cc >> ts;

		if( (hrd > 50) && (cc < 0.7) && (ts > 5600) )
			cout << "10\n";

		else if( (hrd > 50) && (cc < 0.7) )
			cout << "9\n";

		else if( (cc < 0.7) && (ts > 5600) )
			cout << "8\n";

		else if( (hrd > 50) && (ts > 5600) )
			cout << "7\n";

		else if( (hrd > 50) || (cc < 0.7) || (ts > 5600) )
			cout << "6\n";

		else if( (hrd <= 50) && (cc >= 0.7) && (ts <= 5600) )
			cout << "5\n";
	}
	return 0;
}

/*
3 
53 0.6 5602
45 0 4500
0 0 0 

*/