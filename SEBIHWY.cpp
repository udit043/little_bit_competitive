#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		double s,sg,fg,d,tm,dis,orgspd,difsg,diffg;
		cin >> s >> sg >> fg >> d >> tm;

		orgspd = s + 180*d/tm;
		//cout << orgspd << "\n";
		difsg = abs((double(sg-orgspd)));
		diffg = abs((double(fg-orgspd)));

		if( difsg < diffg )
			cout << "SEBI\n";
		else if( difsg > diffg )
			cout << "FATHER\n";
		else if( difsg == diffg )
			cout << "DRAW\n";
	}
	return 0;
}