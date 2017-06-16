// long long int res ko pehle int res hi bas likha tha.. uske chakkar mai 4-5 hrs waste hue.. 19dec 10:56pm
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
		long long int res=0;
		long long int n,i,j,k,e,m;
		n = get_i();
		k = get_i();
		e = get_i();
		m = get_i();

		long long int sum[n],num;
		memset(sum,0,sizeof sum);

		for(i=0; i<n; i++)
		{
			if( n-i != 1)
			{
				for(j=0; j<e; j++)
				{
					num = get_i();
					sum[i] += num;
				}
				//cout << "sum["<<i<<"]:" << sum[i] <<"\n";
			}
			else
			{
				for(j=0; j<e-1; j++)
				{
					num = get_i();
					sum[i] += num;
				}
				//cout << "sum["<<i<<"]:" << sum[i] <<"\n";
			}
		}

		/*for(i=0; i<n; i++)
			cout << sum[i] << " ";
		cout << "\n";*/

		sort(sum,sum+n-1);//,greater<int>());
		reverse(sum,sum+n-1);
		/*for(i=0; i<n; i++)
			cout << sum[i] << " ";
		cout << "\n";*/

		res = sum[k-1] - sum[n-1] + 1;

		//cout << "res:" << res <<"\n";
		if(res < 0)
			cout << "0\n";
		else
		{
			if(res <= m)
				cout << res << "\n";
			if(res > m)
				cout << "Impossible\n";
		}
		/*if((res <= m) && (res >= 0))
			cout << res << "\n";
		else if(res < 0)
			cout << "0\n";
		else
			cout << "Impossible\n";*/
	}
	return 0;
}

/*
4
4 2 3 10
7 7 7
4 6 10
7 10 9
9 9
4 2 3 10
1 3 2
2 3 1
2 1 1
9 9
4 1 3 10
10 10 10
10 10 10
10 10 10
9 9
4 2 3 2
2 2 0
2 2 0
2 2 0
2 2

*/