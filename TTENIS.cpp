#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int l=0,w=0,f=0;
		for(int i=0; i<s.length(); i++)
		{
			if(s[i] == '0')
				l++;
			else
				w++;

			if( ( l == 11 ) && ( w < 10 ) )
			{
				cout << "LOSE\n";
				f=1;
				break;
			}
			
			else if( ( w == 11 ) && ( l < 10 ) )
			{
				cout << "WIN\n";
				f=1;
				break;
			}
			
			else if( ( l >= 10 ) && ( w >= 10 ) )
			{
				if( (l - w) == 2 )
				{
					cout << "LOSE\n";
					f=1;
					break;
				}
				else if( (w - l) == 2 )
				{
					cout << "WIN\n";
					f=1;
					break;
				}
			}
		}
		if( f == 0 )
			cout << "LOSE\n";
	}
	return 0;
}