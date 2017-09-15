#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,y,ans=0;int a[100001]={0},i;

		cin >> n;

		for(i=0; i<n; i++)
		{
			cin >> y;
			if(a[y] == 0)
			{
				ans += 1;
				a[y] = 1;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}