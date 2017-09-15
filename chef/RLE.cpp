#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1;
	int i,l=1;
	cin >> s;

	for(i=0; i<s.length()-1; ++i)
	{
		if(s[i] == s[i+1])
		{
			++l;
		}
		else
		{
			cout << s[i] << l ;
			l=1;
		}
	}
	if(s[i] != s[i-1])
		cout << s[i] << "1\n";
	else
		cout << s[i] << l << "\n";
	return 0;
}