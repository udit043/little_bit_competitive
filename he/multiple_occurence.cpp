#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

ll a[200001];
int main()
{
	ll t, n, x, i, j, d, s;
	sll(t);
	while(t--)
	{
		s=0;
		sll(n);
		for(i=0; i<n; i++)
			sll(a[i]);

		for(i=0; (i<n); i++)
		{
			if(a[i] == 0)
				continue;
//			cout << "i hai " << i << " : " << a[i] << "\n";
			d = i+1;
			for(j=i+1; (j<n); j++)
			{
				if(a[j] == 0)
					continue;
//				cout << "j hai " << j << " : " << a[j] << "\n";
				if(a[i] == a[j])
				{
					d = j+1;
					a[j]=0;
				}
//				cout << "# j hai " << j << " : " << a[j] << "\n";
			}
//			cout << "s hai " << s << "\n";
			s += (d-(i+1));
		}
		pd(s);
	}
	return 0;
}

/*
1
5
1 2 3 3 2

4
*/