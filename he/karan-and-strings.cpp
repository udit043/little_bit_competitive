#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s,r;
		long long int i;
		cin >> s;
		for(i=0; i<s.length(); i++)
		{
			if(s[i] != s[i+1])
				r += s[i];
		}
		cout << r << "\n";
	}
	return 0;
}

/*	if(s[i] == s[i+1])
		i++;
	r += s[i];
*/