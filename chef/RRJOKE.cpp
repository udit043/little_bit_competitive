#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,res=0;
		cin >> n;
		int x;
		for(i=1; i<=n*2; i++)
		{
			cin >> x;
		}

		for(i=1; i<=n; i++)
			res = res^i;
		cout << res << "\n";
	}
	return 0;
}

/*
2
2
1 2
0 0
3
3 3
0 0
0 3

*/