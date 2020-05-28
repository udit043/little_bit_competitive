#include <bits/stdc++.h>
using namespace std;

//#define mx 1000007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);
ll a[11], b[11], c[11];

int main()
{
	int t, n, i, j, mn, mx, c;
	sd(t);
	while(t--)
	{
		mn=12;	mx=0;
		sd(n);
		for(i=0; i<n; i++)
			sd(a[i]);
		for(i=0; i<n-1; i++)
		{
			c=1;
			for(j=i+1; j<n; j++)
			{
//				cout <<a[j]<<" ,, "<<a[j-1]<<"\n";
				if(abs(a[j]-a[j-1])<=2)
				{
					c++;
//					cout << "haan c : " << c << "\n";
//					cout <<a[j]<<","<<a[j-1]<<"\n";
					i=j;
				}
				else
				{
//					cout << "nhi c : " << c << "\n";
//					cout <<a[j]<<",,"<<a[j-1]<<"\n";
					j=n;
				}
//				cout << c << "..\n";
			}
//			cout << "final c hai : " << c << "\n";
//			i=j;
			mn = min(mn, c);
			mx = max(mx, c);
		}
		if(abs(a[n-1]-a[n-2]) > 2)
		{
			c=1;
			mn = min(mn, c);
			mx = max(mx, c);
		}

		printf("%d %d\n", mn, mx);
	}
	return 0;
}

/*
3
2
3 6
3
1 3 5
5
1 2 5 6 7

1 1
3 3
2 3
*/