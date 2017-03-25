#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int t,res=0;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		if( (s[0] == '+') || (s[1] == '+') || (s[2] == '+') )
			res++;
		else
			res--;
	}
	cout << res << "\n";
	return 0;
}