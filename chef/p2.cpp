#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,a=0;
	cin >> t;

	while(t--)
	{
		string b;
		cin >> b;

		for(int i =0; i < b.length(); i++ )
		{
			if(b[i] == '0')
				a = a + 0;
			if(b[i] == '1')
				a = a + 1;
			if(b[i] == '2')
				a = a + 2;
			if(b[i] == '3')
				a = a + 3;
			if(b[i] == '4')
				a = a + 4;
			if(b[i] == '5')
				a = a + 5;
			if(b[i] == '6')
				a = a + 6;
			if(b[i] == '7')
				a = a + 7;
			if(b[i] == '8')
				a = a + 8;
			if(b[i] == '9')
				a = a + 9;	
		}
		cout << a << "\n";
	}

	return 0;
}