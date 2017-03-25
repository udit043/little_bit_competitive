#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		int i,j=0,res=0;
		cin >> s;
		for(i=0; i < s.length(); i++)
		{
			if( s[i] == '(' )
			{
				j += 1;
			}
			else
			{
				j -= 1;
			}
			res = max(res, j);
		}
		for(i=0; i<res; i++)
		{
			cout << "(";
		}
		for(i=0; i<res; i++)
		{
			cout << ")";
		}
		cout << "\n";
	}
	return 0;
}