#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		long unsigned int a=0;
		cin >> s;
		for(int i=0; i<s.length(); i++)
		{
			if(s[i] == 'a')
				a++;
		}
		cout << min((s.length()-a), a) << "\n";
	}
	return 0;
}