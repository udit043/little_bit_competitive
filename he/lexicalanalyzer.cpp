//wrong incomplete

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t, ans=0;
	scanf("%lld", &t);
	set<string> a;
	while(--t+1)
	{
		string s1, s2, s3;
		cin >> s1 >> s2 >> s3;
		
		a.insert(s1);
	}
	for( set<std::string>::iterator iter = a.begin() ; iter != a.end() ; ++iter ) 
		++ans;
	cout << ans << '\n' ;
	return 0;
}