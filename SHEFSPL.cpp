#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,sum=0,a,max=-1;
		cin >> n;

		for(int i=0; i<n; i++)
		{
			cin >> a;
			sum = sum + a;
			if( a > max )
				max = a;
		}
		//cout << "max:" << max <<" sum:" <<sum <<"\n";
		unsigned long long ans = ( (max*n) - (sum) ) ;
		cout << ans << "\n";
	}
	return 0;
}