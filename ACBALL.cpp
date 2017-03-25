#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a,b,c;
		cin >> a >> b;
		c=a;

		for(int i=0; i<a.length(); i++)
		{
			if( (a[i] == b[i]) && (a[i]=='W') )
				c[i] = 'B';

			else if( (a[i] == b[i]) && (a[i]=='B') )
				c[i] = 'W';

			else
				c[i] = 'B';
		}
		cout << c << "\n";
	}
	return 0;
}