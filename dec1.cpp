#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin >> t;
	while(t--)
	{
		cin >> n;

		if(n%8 == 1)
			cout << n+3 << "LB\n";
		else if(n%8 == 2)
			cout << n+3 << "MB\n";
		else if(n%8 == 3)
			cout << n+3 << "UB\n";
		else if(n%8 == 4)
			cout << n-3 << "LB\n";
		else if(n%8 == 5)
			cout << n-3 << "MB\n";
		else if(n%8 == 6)
			cout << n-3 << "UB\n";
		else if(n%8 == 7)
			cout << n+1 << "SU\n";
		else if(n%8 == 0)
			cout << n-1 << "SL\n";
	}
	return 0;
}

/*

1 = 4 
2 = 5
3 = 6
4 = 1
5 = 2
6 = 3
7 = 8SU
8 = 7SL

9  = 12
10 = 13
11 = 14
12 = 9
13 = 10
14 = 11
15 = 16SU
16 = 15SL

*/