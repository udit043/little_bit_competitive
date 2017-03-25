#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	for(int i=0; i<l; i++)
	{
		if(s[i] == '?')
		{
			if( i == 0 )
			{
				if( i+1 < l )
				{
					if(s[i+1] == 'a')
						s[i] = 'b';
					else
						s[i] = 'a';
				}
				else
					s[i] = 'a';
			}
			else
			{
				if( s[i-1] == 'a' )
					s[i] = 'b';
				else
				{
					if( i+1 < l)
					{
						if(s[i+1] == 'a')
							s[i] = 'b';
						else
							s[i] = 'a';
					}
					else
						s[i] = 'a';
				}
			}
		}
		cout << s[i];
	}
	cout << "\n";
	return 0;
}