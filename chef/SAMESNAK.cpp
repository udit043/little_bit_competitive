#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		double x11,y11, x12,y12;
		double x21,y21, x22,y22;
		double len1, len2;
		double slope1, slope2;
		double actual_length;
		cin >> x11 >> y11 >> x12 >> y12;
		cin >> x21 >> y21 >> x22 >> y22;

		if(x11 == x12)
			len1 = abs(abs(y11)-abs(y12));
		else
			len1 = abs(abs(x11)-abs(x12));

		if(x21 == x22)
			len2 = abs(abs(y21)-abs(y22));
		else
			len2 = abs(abs(x21)-abs(x22));

		slope1 = abs(y12-y11)/abs(x12-x11);
		slope2 = abs(y22-y21)/abs(x22-x21);

		//cout << slope1 << " " << slope2 << "...........\n";

		if( (slope1 == slope2) && (slope1 == 0) ) //horizontal
		{
			actual_length = max(x11,max(x12,max(x21,x22))) - min(x11,min(x12,min(x21,x22)));
			if(actual_length < len1+len2)
				cout << "yes\n";
			else
				cout << "no\n";
		}
		else if( (slope1 == slope2) && (slope1 != 0) ) //vertical
		{
			actual_length = max(y11,max(y12,max(y21,y22))) - min(y11,min(y12,min(y21,y22)));
			if(actual_length < len1+len2)
				cout << "yes\n";
			else
				cout << "no\n";
		}
		else if( (slope1 != slope2) && (slope1 == 0) )
		{
			if( ((x11 == x21) && (y11 == y21)) || ((x11 == x22) && (y11 == y22)) || ((x12 == x21) && (y12 == y21)) || ((x12 == x22) && (y12 == y22)) )
				cout << "yes\n";
			else
				cout << "no\n";
		}
		else if( (slope1 != slope2) && (slope2 == 0) )
		{
			if( ((x21 == x11) && (y21 == y11)) || ((x22 == x11) && (y22 == y11)) || ((x21 == x12) && (y21 == y12)) || ((x22 == x12) && (y22 == y12)) )
				cout << "yes\n";
			else
				cout << "no\n";
		}
		else
			cout << "no\n";

		//cout << actual_length << " " << len2+len1 << "\n";
		//cout << min(x11,min(x12,min(x21,x22))) << " , " << max(x11,max(x12,max(x21,x22))) << "\n";
	}
	return 0;
}

/*
4
2 1 8 1
11 1 7 1
2 1 8 1
11 1 9 1
2 1 8 1
3 1 3 -2
2 1 8 1
2 1 2 -2

*/