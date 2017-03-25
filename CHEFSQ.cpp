#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n,f,i,j,res=0;
		cin >> n;

		long long int a[n];
		for(i=0; i<n; i++)
			cin >> a[i];
		cin >> f;
 			
		long long int b[f];
		for(i=0; i<f; i++)
			cin >> b[i];

		for(i=0; i<f; )
		{
			for(j=0; j<n; j++)
			{
				if(b[i] == a[j]) //maybe  if((b[i] == a[j]) && (i<f)) as in python
				{
					i++;
				}
			}
			break;
		}
		if(i == f)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}