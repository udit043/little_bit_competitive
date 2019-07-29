#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx); 

int main()
{
	ll t, n, i, j, a[100];
	bool f;
	string s;
	sll(t);
	while(t--)
	{
		f = false;
		for(i=0; i<100; i++)
			a[i] = 0;

		j = 0;

		cin >> ws;
		getline(cin, s);

		for(i=0; i<s.length(); i++)
		{
			if(s[i] != ' ')
			{
				if(a[j] == 0)
				{
					a[j] = (int)s[i]-48;
				}
				else
					a[j] = a[j]*10 + (int)s[i]-48;
			}
			else
				j++;
		}

		sort(a, a+j+1);

//		for(i=0; i<=j; i++)
//			cout << a[i] << " ";
//		cout << "\n";

		for(i=j; i>=0; i--)
		{
			if(a[i] == j)
				n = a[i-1];
			else
				n = a[i];
			break;
		}
		cout << n << "\n";
	}
	return 0;
}

/*
3
1 2 1
3 1 2 8
1 5 1 4 3 2

1
8
4
*/