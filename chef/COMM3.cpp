#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int r,f=0;
		cin >> r;
		long double d[3],a[3],b[3];
		for(int i=0; i<3; i++)
		{
			cin >> a[i] >> b[i];
		}
		d[0] = sqrt(   pow(abs(a[0]-a[1]), 2) + pow(abs(b[0]-b[1]), 2)    );
		d[1] = sqrt(   pow(abs(a[1]-a[2]), 2) + pow(abs(b[1]-b[2]), 2)    );
		d[2] = sqrt(   pow(abs(a[0]-a[2]), 2) + pow(abs(b[0]-b[2]), 2)    );

		if( d[0] <= r)
			++f;
		if( d[1] <= r)
			++f;
		if( d[2] <= r)
			++f;
		if( f > 1 )
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}