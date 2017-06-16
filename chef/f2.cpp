#include <iostream>
#include <algorithm>
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
	int t,Case=0;
	t = get_i();
	while(t--)
	{
		int ans=0;
		Case++;
		int n,p=0;
		n = get_i();
		int a[n];
		for(int i=0; i<n; i++)
			a[i] = get_i();
		sort(a, a+n);
		for(int i=n-1; i>=p; i--)
		{
			if(a[i] >= 50)
				ans++;
			else
			{
				int y = i,f=0;
				while(y >= p)
				{
					p++;
					//cout <<"hi : " << y << "\n";
					y--;
					a[i] += a[i];
					if(a[i] >= 50)
					{
						f=1;
						ans++;
						i=y;
						break;
					}
				}
				if(f != 1)
				{
					ans++;
					i=y;
					break;
				}
			}
		}
		cout << "Case #" << Case << ": " << ans << "\n";
	}
	return 0;
}

/*
5
4
30
30
1
1
3
20
20
20
11
1
2
3
4
5
6
7
8
9
10
11
6
9
19
29
39
49
59
10
32
56
76
8
44
60
47
85
71
91

*/