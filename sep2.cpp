#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		string s; int l=0,i,y=0;
		cin >> s;

		l = s.length();

		for (i = 0; i < l/2; i++)
		{
			if ((s[i] != s[l-i-1]) || ( (s[i] == '.') && (s[l-i-1] == '.') ) )
			{
				if ( (s[i] == '.') && (s[l-i-1] == '.') )
				{
					s[i]='a';
					s[l-i-1]='a';
				}

				else if (s[i] == '.')
				{
					s[i] = s[l-i-1];
				}

				else if (s[l-i-1] == '.')
				{
					s[l-i-1] = s[i];
				}

				else
				{
					y=4;
				}
			}

			if ( (l%2==1) && (s[l/2] == '.') )
				s[l/2] = 'a';

			if(y == 4)
			{
				break;
			}
		}

		if(y == 0)
			cout << s <<"\n";
		else if(y == 4)
			cout << "-1\n";
	}
	return 0;
}
/*
3
a.ba
cb.bc
a.b

*/