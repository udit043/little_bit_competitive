#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s1,s2;
		cin >> s1 >> s2;
		int i,qb=0,qs=0,same=0,dif=0;

		for(i=0; i<s1.length(); i++)
		{
			if(s1[i] == s2[i])
			{
				same++;
				if(s1[i] == '?')
					qb++;
			}
			if(s1[i] != s2[i])
			{
				dif++;
				if( (s1[i] == '?') || (s2[i] == '?') )
					qs++;
			}
		}
		cout << s1.length()-same-qs << " " << dif+qb << "\n";
	}
	return 0;
}