#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int n,m,c,d,count=0;
		cin >> n >> m >> c;

		for(int i = 1; i <= min(n,m); i++ )
		{
			if( ( c % i == 0) && ( c / i <= max(n,m) ) )
			{
				count += 1;
			}
		}
		cout << count << "\n";
	}

	return 0;
}