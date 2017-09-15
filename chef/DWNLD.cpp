#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		int t,k,i,j,tot=0;
		cin >> t >> k;
		for(i=1; i<=t; ++i)
		{
			int m,d;
			cin >> m >> d;
			if(k >= m)
			{
				//cout << "1..\n";
				k = k - m;
			}
			else
			{
				//cout << "2..\n";
				m = m - k;
				tot = tot + m*d;
				k=0;
			}
		}
		cout << tot << "\n";
	}
	return 0;
}

/*
3
2 2
2 1
2 3
2 2
1 2
2 3
3 0
1 2
2 4
10 10

*/