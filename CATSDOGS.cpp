#include <iostream>
using namespace std;

int main()
{
	long int t;
	cin >> t;
	while(t--)
	{
		long long int c,d,l;
		cin >> c >> d >> l;

		if( l%4 == 0)
		{
			l = l / 4;
			l = l - d;
			if(l>0)
			{
				if(d == 0)
				{
					if (l == c)
						cout << "yes\n";
					else
						cout << "no\n";
				}
				else if(l <= c)
					cout << "yes\n";
				else
					cout << "no\n";
			}
			else if( (l == 0) && (c <= 2*d) )
				cout << "yes\n";
			else
				cout << "no\n";
		}
		else
			cout << "no\n";
	}
	return 0;
}



/*int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int c,d,legs,dog_leg,cat_leg,remaining_leg;
		cin >> c >> d >> legs;

		if(legs % 4 == 0)
		{
			legs = legs / 4;
			if(legs == (c+d))
				cout << "yes\n";
			else if(legs > (c+d))
				cout << "no\n";
			else
			{
				if((legs == d) && (c <= 2*d))
					cout << "yes\n";
				else if((legs > d) && ((legs-d) == c) )
					cout << "yes\n";
				else
					cout << "no\n";
			}
		}
		else
			cout << "no\n";
	}
	return 0;
}*/

/*
			if( c > (d+d) )
			{
				legs = legs - d;
				c = c - d;
				if(legs == c)
					cout << "yes\n";
				else
					cout << "no\n";
			}
			else
			{
				if(legs <= d+c)
					cout << "yes\n";
				else
					cout << "no\n";
			}
*/

/*
			legs = legs / 4 - d;

			if(legs == 0)
			{
				if(c <= 2*d)
					cout << "yes\n";
				else
					cout << "no\n";
			}

			else if( (legs != 0) && (legs > 0) )
			{
				if(legs <= c)
					cout << "yes\n";
				else
					cout << "no\n";
			}
			else
				cout << "no\n";
*/

/*
		if(legs % 4 == 0)
		{
			legs = legs / 4;
			if((legs <= c+d) && (legs >= d))
			{
				cout << "yes\n";
			}
			else
				cout << "no\n";
		}
		else
			cout << "no\n";
*/

/*
		if( (dif != 0) && (dif % 4 == 0) && (dif <= c*4) )
			cout << "yes\n";
		else if( (dif != 0) && (dif % 4 != 0) )
			cout << "no\n";
		else
			cout << "yes\n";
*/

		/*dog_leg = d * 4;
		cat_leg = c * 4;
		remaining_leg = legs - dog_leg;

		if(remaining_leg == 0)
		{
			if(c <= d*2)
				cout << "yes\n";
			else
				cout << "no\n";
		}
		else
		{
			if( (remaining_leg <= cat_leg) && (remaining_leg % 4 == 0) )
				cout << "yes\n";
			else
				cout << "no\n";
		}*/