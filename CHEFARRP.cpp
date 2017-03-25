#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned int n;
		cin >> n;
		unsigned int a[n];
		for(int i=0; i<n; i++)
			cin >> a[i];
		unsigned int res=0;
		for(int i=0; i<n; i++)
		{
			unsigned int prod,sum;
			prod=1;sum=0;
			for(int j=i; j<n; j++)
			{
				prod = prod * a[j];
				sum = sum + a[j];
				if(prod == sum)
					res += 1;
			}
		}
		cout << res << "\n";
	}
	return 0;
} 