#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
using namespace std;

static long int get_i()
{
	char c=getchar();
	while(c<'0'||c>'9')
	c=getchar();
	long int ret=0;
	while(c>='0'&&c<='9')
	{
		ret=ret*10+c-'0';
		c=getchar();
	}
	return ret;
}

int main ()
{
	int t;
	t = get_i();
	while(t--)
	{
		int n;
		n = get_i();
		int a[n];
		memset(a, 0, sizeof a);
		for(int i=0; i<n; i++)
			a[i] = get_i();

		unsigned long long int p = pow(2,n);
		long long int count, j, ans=0, mid;

		for(count=0; count<p; count++)
		{
			mid = 0;
			for(j=0; j<n; j++)
			{
				if(count & (1<<j))
				{
					//cout << a[j] << "h\n";
					mid ^= a[j];
					//cout << mid << "j\n";
				}
			}
			ans ^= mid;
			//cout << "\n";
		}
		cout << ans << "\n";
	}
	return 0;
}

	/*int a,b,c,d,e;

	a = 3^3;
	cout << a << "\n";

	b = 3^3^(3^3) ;
	cout << b << "\n";*/
