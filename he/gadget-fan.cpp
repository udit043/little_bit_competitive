#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int t;
	cin >> t;
	while(t--)
	{
		long long int n,k,i,j,sum=0;
		cin >> n >> k;
		if(k == 1)
			cout << "0\n";
		else
		{
			for(i=1; i<k; i++)
			{
				for(j=i; j<k; j++)
				{
					if( (i <=j) && ((i+j) <=k) ) 
					{
						sum++;
					}
				}
			}
			cout << sum << "\n";
		}
	}
	return 0;
}