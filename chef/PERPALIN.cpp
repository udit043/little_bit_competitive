#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long
#define inf 99999999
#define sll(x) scanf("%lld", &x)
#define sd(x) scanf("%d", &x)

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		string s, ss;
		int n, p, i, num;
		sd(n); sd(p);

		// all a,b
		if((n == 1) || (n == 2) || (p == 1))
		{
			printf("impossible\n");
		}
		else
		{
			if(p & 1)
			{
				for(i=0; i<p; ++i)
				{
					if(i & 1)
						s += 'b';
					else
						s += 'a';
				}
				num = n/p;
				for(i=1; i<=num; ++i)
					cout << s;
				printf("\n");
			}

			else if(p/2 == 1)
			{
				printf("impossible\n");
			}

			else
			{
				for(i=0; i<p/2; ++i)
				{
					if(i & 1)
						s += 'b';
					else
						s += 'a';
				}
				ss = s;
				reverse(s.begin(),s.end());
				ss += s;
				num = n/p;
				for(i=1; i<=num; ++i)
				{
					cout << ss;
				}
				printf("\n");
			}
		}
	}
	return 0;
}

/*
5
3 1
2 2
3 3
4 4
6 3

impossible
impossible
aba
abba
abaaba
*/