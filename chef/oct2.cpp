#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		double s,v;
		cin >> s >> v;

		double a;
		a = ( (2.0*s) / (3.0*v) ) ;

		printf("%.6lf\n",a) ;
	}

	return 0;
}