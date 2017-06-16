#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int a,b,res,rev;
	cin >> a >> b;
	res = abs(a-b);
	rev = res%10;
	if( ((rev >= 0) && rev < 9) )
		cout << res+1;
	else
		cout << res-1;
	return 0;
}