#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sc(x) scanf(" %c", &x)
#define MAX 1000007
#define MOD 1000000007

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		int n,m,i,j,mxc=1,mxr=1,c;
		sd(n); sd(m);
		int num[n][m];

		for(i=0; i<n; ++i)
		{
			c=1;
			for(j=0; j<m; ++j)
			{
				sd(num[i][j]);
				if(j>0)
				{
					if(num[i][j-1] == num[i][j])
						++c;
					else
						c=1;
					mxr = max(mxr, c);
				}
			}
		}

		for(j=0; j<m; ++j)
		{
			c=1;
			for(i=0; i<n; ++i)
			{
				if(i>0)
				{
					if(num[i-1][j] == num[i][j])
						++c;
					else
						c=1;
					mxc = max(mxc, c);
				}
			}
		}

		cout << mxr * mxc << "\n";
	}
	return 0;
}

/*
2
1 1
5
2 2
1 2
1 3

*/