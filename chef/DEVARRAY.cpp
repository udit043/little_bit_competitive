//19 dec 7:11PM
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//cout << ULONG_MAX <<"\n";
	unsigned long long n,i,y,q,mx=0,mn=ULONG_MAX;
	cin >> n >> q;
	unsigned long long a[n];

	for(i=0; i<n; i++)
	{
		cin >> a[i];
		mx = max(mx,a[i]);
		mn = min(mn,a[i]);
	}
	//cout << "min:"<<mn<<", max:"<<mx<<"\n";
	for(i=0; i<q; i++)
	{
		cin >> y;

		if( (y >= mn) && (y <= mx) )
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}