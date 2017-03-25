#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long n,m,i,f=0,v1=0,v2=0;
		cin >> n >> m;
		
		long long int a[n];
		long long int b[((n-m)/2)+1];
		long long int c[(n-m)/2];
		
		memset(a,0,sizeof a);
		memset(b,0,sizeof b);
		memset(c,0,sizeof c);
		
		for(i=0; i<m; i++)
		{
			int y;
			cin >> y;
			a[y-1]=y;
			//cout << "i is " << i << " and m is " << m << "\n";
		}
		for(i=0; i<n; i++)
		{
			if(a[i] == 0)
			{
				if(f == 0)
				{
					b[v1] = i+1;
					v1++;
					f = 1;
				}
				else if(f == 1)
				{
					c[v2] = i+1;
					v2++;
					f = 0;
				}
			}
		}
		for(i=0; i<v1; i++)
			cout << b[i] << " ";
		cout << "\n";
		for(i=0; i<v2; i++)
			cout << c[i] << " ";
		cout << "\n";
	}
	return 0;
}