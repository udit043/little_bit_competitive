#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long int n,i;
		cin >> n;
		long long int a[n], c[1002];
		long long int l=0,l1=0,b=0,b1=0,f=0;
		memset(c,0,sizeof c);

		for(i=0; i<n; i++)
		{
			cin >> a[i];
		}

		sort(a,a+n);

		for(i=n-1; i >= 0; i--)
		{
			c[a[i]]++;
			if(c[a[i]] % 2 == 0)
			{
				if(l == 0)
				{
					l1 = a[i];
					l++;
				}
				else if(b == 0)
				{
					b1 = a[i];
					b++;
					f = 1;
					break;
				}
			}
		}
		if(f == 0)
			cout << "-1\n";
		else
			cout << l1*b1 << "\n";
	}
	return 0;
}

/*
	int c[1002]
	//memset(c,0,sizeof c);
	c[a[i]]++;
	if(c[a[i] >= 2)
	{
		if(l == 0)
		{
			l1 = a[i];
			l++;
		}
		else if(b == 0)
		{
			b1 = a[i];
			b++;
		}
	}
*/