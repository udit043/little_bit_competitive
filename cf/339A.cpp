#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int a[4];
	a[0]=a[1]=a[2]=a[3]=0;
	string s;
	cin >> s;
	for(int i=0; i<s.length(); i+=2)
	{
		if(s[i] == '1')
			a[1]++;
		if(s[i] == '2')
			a[2]++;
		if(s[i] == '3')
			a[3]++;
	}
	//cout << a[1] << a[2] << a[3] << "\n";
	while(a[1])
	{
		cout << "1";
		a[1]--;
		if( (a[1] !=0 ) || (a[2] != 0) || (a[3] != 0) )
			cout << "+";
	}
	while(a[2])
	{
		cout << "2";
		a[2]--;
		if( (a[2] !=0 ) || (a[3] != 0) )
			cout << "+";
	}
	while(a[3])
	{
		cout << "3";
		a[3]--;
		if(a[3])
			cout << "+";
	}
	return 0;
}