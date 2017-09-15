#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n; long long num,res=1;
		scanf("%d", &n);
		if(n&1)
		{
			num = n/2+1;
			cout << pow(num, 2)*pow(num, 2) << "\n";
		}
		else
		{
			num = n/2-1;
			while(num--)
			{
				//cout << "ih";
				res = res*3;
			}
			cout << 7*res << "\n";
			//cout << 7*pow(3,num) << "\n";
		}
	}
	return 0;
}