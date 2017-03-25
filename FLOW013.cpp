#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,f=0,s;

		cin >> a;
//		if(!(a>=40) && (a<=180))
//			f=1;
		s=a;

		cin >> a;
//		if(!(a>=40) && (a<=180))
//			f=1;
		s+=a;

		cin >> a;
//		if(!(a>=40) && (a<=180))
//			f=1;
		s+=a;

		if( s != 180)
			f=1;
		if(f == 0)
			cout <<"YES\n";
		else
			cout <<"NO\n";
	}
	return 0;
}