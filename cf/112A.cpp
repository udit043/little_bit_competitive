#include <iostream>
#include <cstring>
#include <locale>
using namespace std;

int main()
{
	locale loc;
	string f,s;
	cin >> f >> s;
	for(int i=0; i<s.length(); i++)
	{
		if( isupper(s[i], loc))
		{
			s[i] = tolower(s[i], loc);
		}
		if( isupper(f[i], loc))
		{
			f[i] = tolower(f[i], loc);
		}

		if(f[i] > s[i])
		{
			cout << "1\n";
			return 0;
		}
		else if(f[i] < s[i])
		{
			cout << "-1\n";
			return 0;
		}
	}
	cout << "0\n";
	return 0;
}