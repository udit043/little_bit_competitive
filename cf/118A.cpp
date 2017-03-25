#include <iostream>
#include <cstring>
#include <locale>
using namespace std;

int main()
{
	string s,res;
	locale loc;
	cin >> s;
	for(int i=0; i<s.length(); i++)
	{
		if( (s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'y')
		 || (s[i] == 'A') || (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'O') || (s[i] == 'U') || (s[i] == 'Y')
		  )
		{}
		else
		{
			res = res + '.';
			char c = s[i];
			if( isupper(c, loc))
				c = tolower(c, loc);
			res = res + c;
		}
	}
	cout << res << "\n";
	return 0;
}