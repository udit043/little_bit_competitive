#include <iostream>
using namespace std;
int main()
{
	short int t;
	cin >> t;
	while(--t+1)
	{
		long long int n,i,zero=0,f=1000000,ans=0,flag=0;
		cin >> n;
		long long int a[n];
		for(i=0; i<n; i++)
		{
			cin >> a[i];
			if(a[i] == 0)
				++zero;
		}
		do
		{
			flag=0;
			for(i=0; i<n-1; i++)
			{
				if(a[i] == 0)
				{
					if(a[i+1] == 1)
					{
						a[i]  = 1;
						a[i+1]= 0;
						++ans;
					}
					else
						flag=1;
				}
			}
		}while(f == 1);
		cout << ans << "\n";
	}
	return 0;
}