#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159265

int main()
{
	int t,i=0;
	cin >> t;
	while(t--)
	{
		i++;
		double p,x,y,angle,per=50,base=50,dist,angle_dist;
		cin >>	p >> x >> y;
		angle = p*3.6;
		dist = sqrt( abs(x-50)*abs(x-50) + abs(y-50)*abs(y-50) );
		angle_dist = atan2(abs(y-50), abs(x-50)) * 180/PI;

		if( (angle_dist <= angle) && (dist <= 50) )
			cout << "Case #" << i <<": black\n";
		else
			cout << "Case #" << i <<": white\n";
	}
	return 0;
}

/*
5
0 55 55
12 55 55
13 55 55
99 99 99
87 20 40

*/

/*
	
		double x,x1,y,y1;
		cin >> x >> y >> x1 >> y1;
		cout << "(" << x << "," << y << ") (" << x1 << "," << y1 << ")" <<"\n";
		
		cout << atan2( abs(y-y1), abs(x-x1) ) * 180/PI << " .... \n";
		//cout << atan( abs(y-y1), abs(x-x1) ) << "\n";

*/

/*
	cout << "angle = " << angle
	<< ", dist = " << dist
	<< ", angle_dist = " << angle_dist << "\n\n";
*/