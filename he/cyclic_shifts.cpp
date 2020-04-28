#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define mod 1000000007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
int a[mx];
//fill_n(a, 102, mx);

int main()
{
	ll t, n, m, i, r, j, ans, cnt;
	char c;
	sll(t);
	while(t--)
	{
		cnt = 15;
		ans = 0;
		fill_n(a, 2, mx);
		sll(n);	sll(m);
		cin >> c;
		i=0;
		while(n != 0)
		{
			r = n%2;
			a[i++] = r;
			n /= 2;
		}
		j = 16 - i;
		while(j--)
		{
			a[i++] = 0;
		}
		//for(j=i-1; j>=0; j--)
		//	cout << a[j];
		//cout << "i is " << i << "\n";

		if(c == 'L')
		{
			for(j=i-1-m; j>=0; j--)
			{
				//cout << a[j];
				ans = ans + pow(2, cnt)*a[j];
				cnt--;
			}
			for(j=i-1, r=0; r<=m-1 ; j--, r++)
			{
				//cout << a[j];
				ans = ans + pow(2, cnt)*a[j];
				cnt--;
			}
		}
		else
		{
			for(j=m-1; j>=0; j--)
			{
				//cout << a[j];
				ans = ans + pow(2, cnt)*a[j];
				cnt--;
			}
			for(j=i-1; j>=(m); j--)
			{
				//cout << a[j];
				ans = ans + pow(2, cnt)*a[j];
				cnt--;
			}
		}
		//cout << "\nanswer is " << ans << "\n";
		cout << ans << "\n";
	}
	return 0;
}

/*
2
7881 5 L
7881 3 R

55587
9177
*/