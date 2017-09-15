#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		int i,res=0;
		
		cin >> s;
		for(i=0; i<s.length(); i++)
		{
			if(s[i] == '>')
				s[i] = '<';

			else if(s[i] == '<')
				s[i] = '>';
		}

		for(i=0; i<s.length()-1; i++)
		{
			if( (s[i] == '>') && ((s[i+1] == '<')) )                // || ((s[i] == '>') && ((s[i+1] == '<'))) )
			{
				res++;
			}
		}
		cout << res << "\n";
	}
	return 0;
}

/*
4
><
*><*
><><
*><><><*

*/