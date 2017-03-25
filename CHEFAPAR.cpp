#include <iostream>
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

int main()
{
	short int t;
	t = get_i();//cin >> t;
	while(t--)
	{
		unsigned long n,i,a,zero=0,res=0,fine=0;
		n = get_i();//cin >> n;
		for(i=0; i<n; i++)
		{
			cin >> a;
			if(a == 0)
			{
				++zero;
				++fine;
			}
			else
			{
				if(zero > 0)
				{
					++zero;
				}
			}
		}
		cout << fine*1000 + zero*100 << "\n";
	}
	return 0;
}