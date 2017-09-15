#include <iostream>
#include <cmath>
using namespace std;
#define ll unsigned long long

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll a,n,m,a1,l=0,mul=1,i;
		cin >> a >> n >> m;
		a1=a;
		do
		{
			a1/=10;
			mul*=10;
		}while(a1);
		a1=a;
		//cout << "mul hai " << mul << "\n";
		for(i=0; i<n; i++)
		{
			//cout << a << "..\n";
			if(i == 0)
				a %= m;
			else
				a = ((a*mul)+a1)%m;
		}
		cout << a << "\n";//cout << a << " " << a/m << " " << a%m << "\n";
	}
	return 0;
}

/*
4
8
3
7
2
6
1
5
0
4
8
3
7
2
 ... 
1 4
145 8
14590 3
1459034 7
145903479 2
14590347923 6
1459034792368 1
145903479236812 5
14590347923681257 0
1459034792368125701 4

15
13 1 9
13 2 9
13 3 9
13 4 9
13 5 9
13 6 9
13 7 9
13 8 9
13 9 9
13 10 9
13 11 9
13 12 9
13 13 9
13 14 9
13 15 9


*/

/*int main()
{
	ll f1 = 13;
	ll f2 = 1313;
	ll f3 = 131313;
	ll f4 = 13131313;
	ll f5 = 1313131313;
	ll f6 = 131313131313;
	ll f7 = 13131313131313;
	ll f8 = 1313131313131313;
	ll f9 = 131313131313131313;
	ll f10 = 13131313131313131313;
	ll e  = 9;
	
	ll f = 1;
	f = ((f*10)+3)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";
	f = ((f*100)+13)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";
	f = ((f*100)+13)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";
	f = ((f*100)+13)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";
	f = ((f*100)+13)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";
	f = ((f*100)+13)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";
	f = ((f*100)+13)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";
	f = ((f*100)+13)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";
	f = ((f*100)+13)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";
	f = ((f*100)+13)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";
	f = ((f*100)+13)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";
	f = ((f*100)+13)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";
	f = ((f*100)+13)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";
	f = ((f*100)+13)%e;
	cout << f << "\n";//cout << f/e << " " << f%e << "\n";

	cout << " ... \n";
	cout << f1/e << " " << f1%e << "\n";
	cout << f2/e << " " << f2%e << "\n";
	cout << f3/e << " " << f3%e << "\n";
	cout << f4/e << " " << f4%e << "\n";
	cout << f5/e << " " << f5%e << "\n";
	cout << f6/e << " " << f6%e << "\n";
	cout << f7/e << " " << f7%e << "\n";
	cout << f8/e << " " << f8%e << "\n";
	cout << f9/e << " " << f9%e << "\n";
	cout << f10/e << " " << f10%e << "\n";

	return 0;
}*/