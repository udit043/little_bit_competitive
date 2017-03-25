#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int d[n];

		for(int i=0; i<n; i++)
			cin >> d[i];
		set<int> sa(d, d+n);
		cout << sa.size() << "\n";
	}
	return 0;
}