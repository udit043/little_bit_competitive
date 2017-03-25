#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,m,i;
	cin >> n >> m;
	long long int a[m], ans=10000;
	for(i=0; i<m; i++)
		cin >> a[i];
	sort(a, a+m);
	for(i=0; i<m-1; i++)
	{
		ans = min(ans, a[i+1]-a[i]);
	}
	cout << ans << '\n';
	return 0;
}