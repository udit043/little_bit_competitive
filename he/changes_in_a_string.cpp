#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);
ll a[mx], b[mx];

int main()
{
	ll t, n, i, j, k, ans, c;
	string s;
	sll(t);
	while(t--)
	{
		sll(n);
//		fill_n(a, n+1, 0);	fill_n(b, n+1, 0);
		ans = n+1;	
		cin >> s;
		for(i=0; i<n; i++)
		{
			if(s[i] == 'A')
				a[i]++;
			else
				b[i]++;
		}
		for(i=0; i<n; i++)
		{
			if(s[i] == 'A')
			{

			}
		}
	return 0;
}

/*
4
3
AAB
5
AABAA
1
B
4
BABA

0
1
0
2

4
14
AAABABAABBABAA
14
BBBABABBAABABB
15
AAABABAABBABBAA
15
BBBABABBAABAABB

3
5
3
6

*/

/*		ans = min(a,b);
		for(i=0; i<n-1; i++)
		{
		//	cout << "i is " << i << "\n";
			if(s[i] != s[i+1])
			{
		//		cout << "iiii is " << i << "\n";
				c=0;
				for(j=0; j<i; j++)
				{
					if(s[j] == 'B')
						c++;
				}
				for(j=i+1; j<n; j++)
				{
					if(s[j] == 'A')
						c++;
				}
				ans = min(ans, c);
				cout << s[i];
			}
		}
		cout << "\n";
		pll(ans);
	}
*/
