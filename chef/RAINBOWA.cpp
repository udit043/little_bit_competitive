#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; bool f;
	cin >> t;
	while(t--)
	{
		int n,m=0; f = true;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i)
		{
			cin >> a[i];
			m = max(m, a[i]);
		}
		for(int i=0; i<n/2; ++i)
		{
			if( (!(a[i+1]-a[i] <= 1)) || (a[0] != 1) || (m != 7))
			{
				f = false;
				break;
			}
			if(a[i] != a[n-1-i])
			{
				f = false;
				break;
			}
		}
		if(f == true)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}

/*
3
19
1 2 3 4 4 5 6 6 6 7 6 6 6 5 4 4 3 2 1
14
1 2 3 4 5 6 7 6 5 4 3 2 1 1
13
1 2 3 4 5 6 8 6 5 4 3 2 1

*/