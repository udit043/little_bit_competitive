#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <bitset>

using namespace std;

int main()
{
	long long unsigned int x = 1011011101111010,p=0; //1011-0111-0111-1010 //s4 is 1011011101111010 ans is 46970 y is 12
	std::bitset<16> a (std::string("1011011101111010"));
	//string a = "1011011101111010";
	//char y[16]={'1','0','1','1',    '0','1','1','1',    '0','1','1','1',    '1','0','1','0',};
	
	for(; x > 0; x -= x&-x)
	{
		cout << x ;
		p+=1;
		cout << " " << p << "\n";
	}

	for(int i = 0; i < 16; i++)
		cout << a[i];
	cout << "\n";

	//for(; a > 0; a -= (a) & (-a) )
	{
		a = (  a - (  (a)  &  (-a)  )  );
		
		cout << a ;
		p+=1;
		cout << " " << p << "\n";
	}

	cout << "\n";

	for(int i = 0; i < 16; i++)
		cout << a[i];
	cout << "\n";

	/*for(int i = 0; i < 16; i++)
	{
		for(; y[i] > '0'; y[i] -= ( (y[i]) & (-y[i]) ) )
			cout << y[i] << " ";

		cout << "\n" << i << " ";
	}*/

	cout << "\n";

	return 0;
}


/*long long int query(long long int x) //taken from hacker earth
{
	//x=x+1;
	long long int p=0;
	for(; x > 0; x -= x&-x)
	{
		cout << x << " ";
		p+=1;
		cout << p << "\n";
	}
	return p;
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		string s1,s2,s3,s4;
		int n;

		cin >> s1 >> s2 >> s3 >> n;

		s4 = s1;
		for(int i=0; i<n; i++)
			s4=s4+s2;
		s4=s4+s3;

		long long int ans = 0;
		for(long long int i=s4.length()-1; i>=0;i--)
		{
			ans = ans + pow (2, s4.length()-i-1)*(s4[i]-'0'); //decimal to binary
		}

		//for(int i = 1; i < 514; i++)
		{
			long long int y = query(ans) ;
			cout <<"s4 is " << s4 << " ans is " << ans << " y is " << y << "\n";
		}
	}
	return 0;
}*/