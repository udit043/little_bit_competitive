#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int zero = 0, one = 0;
	string s;
	cin >> s;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == '0')
		{
			zero++;one=0;
			if(zero == 7)
			{
				cout << "YES\n";
				return 0;
			}
		}
		else
		{
			one++;zero=0;
			if(one == 7)
			{
				cout << "YES\n";
				return 0;
			}
		}
	}
	cout << "NO\n";
	return 0;
}