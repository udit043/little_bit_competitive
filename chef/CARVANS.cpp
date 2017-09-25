#include <bits/stdc++.h>
using namespace std;

#define sd(x) scanf("%d", &x)

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		int n, ans=0, s=INT_MAX, in;
		sd(n);
		while(n--)
		{
			sd(in);
			if(in <= s)
			{
				s = in;
				++ans;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}

/*
3
1
10
3
8 3 6
5
4 5 1 2 3

1
2
2
*/