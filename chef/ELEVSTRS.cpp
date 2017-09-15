#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;	double v1,	v2, stair, ele;
		cin >> n >> v1 >> v2;
		stair = sqrt(2) * n / v1;
		ele   = 2*n / v2;

		if(stair < ele)
			cout << "Stairs\n";
		else
			cout << "Elevator\n";
	}
	return 0;
}