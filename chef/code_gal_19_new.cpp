#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int main()
{
	int t, n, i, j, k, s1, s2;
	int b[10001], c[10001];
	sd(t);
	while(t--)
	{
		sd(n);
		j=k=0;
		for(i=0; i<n; i++)
		{
			if(i & 1)
			{
				sd(c[k]);
				k++;
			}
			else
			{
				sd(b[j]);
				j++;
			}
		}
		if(n & 1)
		{
			j = n/2;
			sort(b, b+j+1);
			sort(c, c+j);
		}
		else
		{
			j=n/2;
			sort(b, b+j);
			sort(c, c+j);
		}

		k=j=0;
		s1=s2=0;

		if(n & 1)
		{
			for(i=0; i<=n/2; i++)
			{
				if(b[i] > 0)
					s1 += b[i];
			}
			for(i=0; i<n/2; i++)
			{
				if(c[i] > 0)
					s2 += c[i];
			}
		}
		else
		{
			for(i=0; i<n/2; i++)
			{
				if(b[i] > 0)
					s1 += b[i];
			}
			for(i=0; i<n/2; i++)
			{
				if(c[i] > 0)
					s2 += c[i];
			}
		}
		cout << s1 << ".." << s2 << "\n";
	}
	return 0;
}

		/*for(i=0; i<n; i++)
		{
			if(i & 1)
			{
				cout << c[k] << " ";
				k++;
			}
			else
			{
				cout << b[j] << " ";
				j++;
			}
		}
		cout << "\n";*/