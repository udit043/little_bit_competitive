#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long int n,b,m,res=0,mt=1,q=0;
		cin >> n >> b >> m;

		while(n>0)
		{
			//cout << "n : " << n << " res : " << res << "\n";

			if(n & 1)
			{
				q = (++n)/2;
				n--;
			}
			else
				q = n/2;

			n = n - q;

			if(n == 0)
				b=0;
			res = res + q*m + b;
			m *= 2;
			//cout << "q=" << q << ", n=" << n << ", res=" << res <<"\n";
		}
		cout << res << "\n";
	}
	return 0;
}