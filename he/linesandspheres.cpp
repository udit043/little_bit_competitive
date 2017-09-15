// wrong incomplete
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(--t+1)
	{
		long long int l,n,i,minn=INT_MAX,maxx=0,p=0;
		cin >> l >> n;
		long long int a[n];
		for(i=0; i<n; i++)
		{
			cin >> a[i];
			minn = min(minn, a[i]);
			maxx = max(maxx, a[i]);
//			cout << minn << " ,, " << maxx << "\n";
		}
		
		p = n-minn+2;
		if(minn < p)
			minn = n-minn+1;
		if( (minn > 0) && (minn != INT_MAX) )
			cout << minn-1 << " " << maxx << "\n";
		else
			cout << "0 " << maxx << "\n";
	}
	return 0;
}