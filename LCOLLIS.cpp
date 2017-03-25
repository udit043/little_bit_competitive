#include <bits/stdc++.h>
using namespace std;

unsigned long long int ft[11];
int flag=0;

unsigned long long int fact(unsigned long long int x)
{
	if(flag == 0)
	{
		flag =1;
		ft[0] = 1;
		for(int i=1; i<11; i++)
		{
			ft[i] = ft[i-1] * i;
			//cout << ft[i] << ",,";
		}
	}
	//cout << "\n";
	return (ft[x] / ( 2 * ft[x-2] ) );
}

int main()
{	
	int t;
	cin >> t;
	while(t--)
	{
		int n,m,i,j,f;
		unsigned long long int res=0;
		string s;
		cin >> n >> m;

		int a[n][m];

		for(i=0; i<n; i++)
		{
			cin >> s;
			for(j=0; j<m; j++)
			{
				a[i][j] = s[j]-48;
			}
		}

		for(i=0; i<m; i++)
		{
			f=0;
			for(j=0; j<n; j++)
			{
				if(a[j][i] == 1)
				{
					f++;
				}
			}
			if( f == 2)
				res++;
			else if(f > 2)
			{
				//cout << res << " .. ";
				res += fact(f);
				//cout << res << "\n";
			}
		}
		cout << res << "\n";
	}
	return 0;
}

/*
1 2
1 3
1 4
1 5

2 3
2 4
2 5

3 4
3 5

4 5
*/