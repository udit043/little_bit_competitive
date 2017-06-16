#include <bits/stdc++.h>
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

bool two(unsigned int x)
{
	return x && (!(x&(x-1)));
}

int main()
{
	unsigned int t;
	t = get_i();

	while(t--)
	{
		unsigned int a,b,ct=0;
		a = get_i();
		b = get_i();

		if(a == b)
			cout << ct << "\n";
		else
		{
			while(a != b)
			{
				int f = two(a);
				//cout << "f " << f <<"\n";
				if(f == 1)
				{
					if(b % a == 0)
					{
						ct = ct + __lg(b/a);
						a = b;
					}
					else if(a % b == 0)
					{
						ct = ct + __lg(a/b);
						b = a;
					}
				}
				else
				{
					if( !(a & 0) )
					{
						ct++;
						a = (a>>1);
					}
					else if( a & 1 )
					{
						ct++;
						a = ((a-1)>>1);
					}
				}
			}
			cout << ct << "\n";
		}	
	}
	return 0;
}