// https://www.quora.com/profile/Mahesh-Balakrishnan-5
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() 
{
	ll test, tc, tp, d, res, ans, pw;
	res=ans=pw=tp=0;
	cin >> test;
	while(test--)
	{
		cin >> tc >> d;
		pw = pw + tc - tp;
		
		if(pw <= d)
		{
			pw = abs(pw - tc);
			ans += 1;
		}
		else
		{
			pw = pw - d;
			tp = tc;
		}
	}
	cout << ans << "\n";
	return 0;
}