#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		double s;
		cin >> s;
		if( s < 1500)
			cout << s*2 << "\n";
		else
		{
			//cout << fixed << setprecision(2);
			cout << s + 500 + s*0.98 << "\n";
		}
	}
	return 0;
}