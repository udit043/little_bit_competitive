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

int main()
{
	int t;
	t = get_i();
	while(t--)
	{
		double b,ls,rs,ls1,b1;
		//cout << fixed << setprecision(6);
		cin >> b >> ls;
		ls1= max(b, ls);
		b1 = min(b,ls);
		rs = sqrt(ls1*ls1 - b1*b1);

		if( (rs-(int)rs) != 0)
			cout << rs << " ";
		else
			cout << rs << ".0 ";

		rs = sqrt(b*b + ls*ls);

		if( (rs-(int)rs) != 0)
			cout << rs << "\n";
		else
			cout << rs << ".0\n";
	}
	return 0;
}

/*
3
4 5
10 12
10 20

3.0 6.40312
6.63325 15.6205
17.3205 22.3607
*/