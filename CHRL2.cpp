#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	unsigned int jc=0,jh=0,je=0,jf=0,res=0;

	for(int i=0; i<s.length(); i++)
	{
		if( s[i] == 'C')
		{
			jc += 1;
		}
		else if( s[i] == 'H')
		{
			if( jc > jh )
				jh +=1 ;
		}
		else if( s[i] == 'E')
		{
			if( jh > je )
				je += 1;
		}
		else if( s[i] == 'F')
		{
			if( je > jf )
				jf += 1;
		}
	}
	res = min(jh, min(je,jf) );
	cout << res << "\n";
	return 0;
}