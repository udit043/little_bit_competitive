#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int l=s.length(),f=0,d=0,i,n1=0,n2=0,n3=0,n4=0;
	
	for(i=0; i<l; ++i)
	{
		if( (s[i] != '.') && (d == 0) )
		{
			n1 = n1*10 + (s[i]-48);
		}
		else if( (s[i] != '.') && (d == 1) )
		{
			n2 = n2*10 + (s[i]-48);
		}
		else if( (s[i] != '.') && (d == 2) )
		{
			n3 = n3*10 + (s[i]-48);
		}
		else if( (s[i] != '.') && (d == 3) )
		{
			n4 = n4*10 + (s[i]-48);
		}
		else
			++d;
	}
	if( (n1>=0) && (n1<=255) && (n2>=0) && (n2<=255) && (n3>=0) && (n3<=255) && (n4>=0) && (n4<=255) && (d == 3) && (l >= 7) && (l <= 15) )
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}