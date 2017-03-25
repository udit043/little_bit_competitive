#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,a;
	cin>>n>>m>>a;
	unsigned long long int ans=ceil(n*1.0/a)*ceil(m*1.0/a);
	cout<<ans<<endl;
	return 0;
}
/*#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	long long int n,m,a,ans1=0,ans2=0;
	cin >> n >> m >> a;
	ans1 = n/a;
	if( n%a != 0 )
		ans1++;
	ans2 = m/a;
	if( m%a != 0 )
		ans2++;
	cout << ans1*ans2 << "\n";
	return 0;
}*/