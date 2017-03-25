#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long int k,n,sum=0,i;
		cin >> n >> k;
		int a[n+k];
		for(i=0; i<n; i++)
		{
			cin >> a[i];
			sum += a[i];
		}

		for(i=0; i<k; i++)
		{
			a[i+n] = sum + 1;
			sum += a[i+n];
		}

		//for(i=0; i<n+k; i++)
		//	cout << a[i] << " ";

		//cout << "\na[k+n-1] : a[" << k+n-1 << "] :" << a[k+n-1]; 
		//cout << "\n";

		if(a[k+n-1] & 1)
			cout << "odd\n";
		else
			cout << "even\n";
	}
	return 0;
}

/*
0 - 5 7 = 12
1 - 5 7 13 = 25
2 - 5 7 13 26 = 51
3 - 5 7 13 26 52 = 103
*/