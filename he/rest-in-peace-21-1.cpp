#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s; long long int s1,i,f=0;
		cin >> s;
		s1 = stoll(s);
		
		for(i=0; i<s.length()-1; ++i)
		{
			if( (s[i] == '2') && (s[i+1] == '1') )
				f=1;
		}

		if( (s1%21 == 0) || (f == 1) )
			cout << "The streak is broken!\n";
		else
			cout << "The streak lives still in our heart!\n";
	}
	return 0;
}