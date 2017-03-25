#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,fy=0,fi=0,fn=0;
		cin >> n;
		while(n--)
		{
			char a;
			cin >> a;
			if( a == 'Y')
				fy=1;
			if( a == 'I')
			 	fi=1;
			if( a == 'N')
				fn=1;
		}

		if(fi == 1)
			cout << "INDIAN\n";
		else if(fy == 1)
			cout << "NOT INDIAN\n";
		else
			cout << "NOT SURE\n";
	}
	return 0;
}