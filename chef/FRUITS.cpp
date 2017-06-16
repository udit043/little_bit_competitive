#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m,k,diff;
		cin >> n >> m >> k;
		diff = abs(n-m);

		if(diff > k)
			cout << diff-k <<"\n";
		else
			cout << "0\n";
	}
	return 0;
}