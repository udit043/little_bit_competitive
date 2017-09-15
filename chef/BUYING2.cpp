#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, x, i, sum=0, rem;
		cin >> n >> x;
		int a[n];

		for(i=0; i<n; ++i)
		{
			cin >> a[i];
			sum += a[i];
		}
		sort(a, a+n);
		rem = sum%x;
		if(rem >= a[0])
			cout << "-1\n";
		else
			cout << sum/x << "\n";
	}
	return 0;
}

/*
3
4 7
10 4 8 5
1 10
12
2 10
20 50

*/