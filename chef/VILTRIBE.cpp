#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define inf 99999999
#define sll(x) scanf("%lld", &x)
#define sd(x) scanf("%d", &x)

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		string ss;
		cin >> ss;
		int s=0, e=0, sp=0, i=0, j=0, k=0, a=0, b=0;
		for(i=0; i<ss.length(); ++i)
		{
			if(ss[i] == 'A')
			{
				++a;

				if(sp != 0)
				{
					if(s == 1)
						a += sp;
					sp = 0;
				}
				s = 1;
			}
			else if(ss[i] == 'B')
			{
				++b;

				if(sp != 0)
				{
					if(s == 2)
						b += sp;
					sp = 0;
				}
				s = 2;
			}
			else
				++sp;
		}
		cout << a << " " << b << "\n";
	}
	return 0;
}

/*
4
A..A..B...B
..A..
A....A
..B..B..B..

4 5
1 0
6 0
0 7
*/