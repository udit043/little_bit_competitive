// incomplete
#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define ll long long
#define inf 99999999
#define sll(x) scanf("%lld", &x)
#define sd(x) scanf("%d", &x)

int main()
{
	ll t;
	sll(t);
	while(t--)
	{
		ll n=0, al=0, i=0, num=0;
		sll(n); sll(al);

//		if(n == 1)
//		{
//			printf("1 a");
//		}
//		else
		{
			if(al == 1)
			{
				printf("%d ",n);
				for(i=1; i<=n; ++i)
					printf("a");
			}
			
			else if(al == 2)
			{
				if(n == 2)
				{
					printf("1 ab");
				}
				else if(n == 3)
				{
					printf("2 aab");
				}
				else if(n == 4)
				{
					printf("2 aabb");
				}
				else if(n == 5)
				{
					printf("3 aaabb");
				}
				else if(n == 6)
				{
					printf("3 aaabbb");
				}
				else
				{
					num = (n-1)/2;
					printf("%lld ",num);
					for(i=0; i<num; ++i)
						printf("a");
					printf("ba");
					for(i=0; i<n-num-2; ++i)
						printf("b");
				}
			}
			else
			{
				printf("1 ");
				num = 0;
				while(num < n)
				{
					for(i=97; (i<al+97); ++i)
					{
						if(num < n)
						{
							printf("%c",i);
							++num;
						}
						else
							break;
					}
					//printf("%d\n", num);
				}
			}
		}
		printf("\n");
	}
	return 0;
}

/*
4
5 2
12 26
8 26
7 2

3 aaabb
1 hapybirthday
1 codechef
3 aaababb
*/

/*
			else if(al >= n)
			{
				printf("1 ");
				for(i=97; ((i<al+97) && (i<n+97)); ++i)
					printf("%c", i);
				printf("\n");
			}
*/

/*
3  AA   b        : 2
4  AA   bb       : 2

5  AAA  bb       : 3
6  AAA  bbb      : 3

7  AAA  bAbb     : 3 
8  AAA  bAbbb    : 3

9  AAAA bAbbb    : 4
10 AAAA bAbbbb   : 4
   aaab abbbab
11 AAAAA bAbbbb  : 5
12 AAAAA bAbbbbb : 5

13 AAAAAA bAbbbbb:  6
14 AAAAAA bAbbbbbb: 6
*/