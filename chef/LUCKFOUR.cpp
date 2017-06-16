#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long int f=0;
		string s;
		cin >> s;
		for(int i=0; i<s.size(); i++)
			if(s[i] == '4')
				f++;
		cout << f << "\n";
	}
	return 0;
}