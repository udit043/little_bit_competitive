#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long

int main()
{
	int t;
	cin >> t;
//	cout << "hel\n";
	while(t--)
	{
		ll n, i, j=1, k=2;
		cin >> n;
//		cout << "hello\n";

		if(!(n & 1))
		{
//			cout << "hi\n";
			for(i=1; i<=n; ++i)
			{
				if(i & 1)
				{
					cout << k << " ";
					k+=2;
				}
				else
				{
					cout << j << " ";
					j+=2;
				}
			}
		}
		else
		{
			for(i=1; i<=n; ++i)
			{
				if(i & 1)
				{
					cout << k << " ";
					k+=2;
				}
				else
				{
					if(j+2 == n)
					{
						cout << j+2 << " " << j;
						i=n+1;
					}
					else
					{
						cout << j << " ";
						j += 2;
					}
				}
			}
		}
		cout << "\n";
	}
	return 0;
}

/*
2
2 1

3
2 3 1

4
2 1 4 3

5
2 1 4 5 3

6
2 1 4 3 6 5

7
2 1 4 3 6 7 5

8
2 1 4 3 6 5 8 7

9
2 1 4 3 6 5 8 9 7

10
2 1 4 3 6 5 8 7 10 9

11
2 1 4 3 6 5 8 7 10 11 9
*/