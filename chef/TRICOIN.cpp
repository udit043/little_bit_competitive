#include <bits/stdc++.h>
using namespace std;

int main()
{
	unsigned int t;
	cin >> t;
	while(t--)
	{
		unsigned int n,i,k=2,h=0;
		cin >> n;

		for(i = 2 ;  ; i = i + k)
		{
			h++; 
			//cout << i << " ";
			if (n <= i)
			{
				cout << h << "\n";
				break;
			}
			k++;
		}
	}
	return 0;
}

/*

1 2                      = 1
3 4 5                    = 2
6 7 8 9                  = 3
10 11 12 13 14           = 4
15 16 17 18 19 20        = 5
21 22 23 24 25 26 27     = 6
28 29 30 31 32 33 34 35  = 7

2 5 9 14 20 27 35...
*/