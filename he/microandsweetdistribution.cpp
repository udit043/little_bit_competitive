// incomplete wrong
#include <bits/stdc++.h>
using namespace std;
// right left front back
#define ll long long
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sc(x) scanf(" %c", &x)
#define MAX 1000007
#define MOD 1000000007

int main()
{
	ll t;
	sll(t);
	while(t--)
	{
		ll n,m,sx,sy,xy,dx,dy;
		sll(n); sll(m);		sll(sx);sll(sy);		sll(dx);sll(dy);

		if((sx == 1) && (sy == 1))
		{
			if(dx & 1)
			{
				if((dx == n) && (dy == m))
					printf("Over\n");
				else if(dy == m)
					printf("Back\n");
				else
					printf("Right\n");
			}
			else
			{
				if((dx == n) && (dy == 1))
					printf("Over\n");
				else if(dy == 1)
					printf("Back\n");
				else
					printf("Left\n");
			}
		}

		else if((sx == 1) && (sy == m))
		{
			if(dx & 1)
			{
				if((dx == n) && (dy == 1))
					printf("Over\n");
				else if(dy == 1)
					printf("Back\n");
				else
					printf("Left\n");
			}
			else
			{
				if((dx == n) && (dy == m))
					printf("Over\n");
				else if(dy == m)
					printf("Back\n");
				else
					printf("Right\n");
			}
		}

		else if((sx == n) && (sy == 1))
		{
			if(n & 1)
			{
				if(dx & 1)
				{
					if((dx == 1) && (dy == m))
						printf("Over\n");
					else if(dy == m)
						printf("Front\n");
					else
						printf("Right\n");
				}
				else
				{
					//if((dx == 1) && (dy == m))
					//	printf("Over\n");
					if(dy == 1)
						printf("Front\n");
					else
						printf("Left\n");
				}
			}
			else
			{
				if(dx & 1)
				{
					if((dx == 1) && (dy == 1))
						printf("Over\n");
					else if(dy == m)
						printf("Front\n");
					else
						printf("Right\n");
				}
				else
				{
					//if((dx == 1) && (dy == m))
					//	printf("Over\n");
					if(dy == m)
						printf("Front\n");
					else
						printf("Right\n");
				}
			}
		}

		else if((sx == n) && (sy == n))
		{
			if(n & 1)
			{
				if(dx & 1)
				{
					if((dx == 1) && (dy == 1))
						printf("Over\n");
					else if(dy == 1)
						printf("Front\n");
					else
						printf("Left\n");
				}
				else
				{
					//if((dx == 1) && (dy == m))
					//	printf("Over\n");
					if(dy == m)
						printf("Front\n");
					else
						printf("Right\n");
				}
			}
			else
			{
				if(dx & 1)
				{
					if((dx == 1) && (dy == m))
						printf("Over\n");
					else if(dy == m)
						printf("Front\n");
					else
						printf("Right\n");
				}
				else
				{
					//if((dx == 1) && (dy == m))
					//	printf("Over\n");
					if(dy == 1)
						printf("Front\n");
					else
						printf("Left\n");
				}
			}
		}
		printf("t is %lld\n", t );
	}
	return 0;
}

/*
20
7 9
7 9
6 2
10 10
10 1
1 10
10 8
1 1
1 2
9 4
1 4
2 2
10 6
10 6
6 2
5 9
5 9
2 5
6 7
6 1
1 1
5 9
1 1
5 9
6 9
6 9
5 7
4 4
1 4
3 2
10 9
1 9
6 9
4 5
1 5
1 1
9 8

*/














































/*int main()
{
	ll t;
	sll(t);
	while(t--)
	{
		ll n,m,sx,sy,xy,dx,dy,f;
		sll(n); sll(m);sll(sx);sll(sy);sll(dx);sll(dy);

		if((sx == 1) && (sy == 1))
		{
			if(n & 1)
			{
				if((dx == n) && (dy == m))
					printf("Over\n");
				else if(dx & 1)
				{
					if(dy == m)
						printf("Back\n");
					else
						printf("Right\n");
				}
				else
				{
					if(dy == 1)
						printf("Back\n");
					else
						printf("Left\n");
				}
			}
			else
			{
				if((dx == n) && (dy == 1))
					printf("Over\n");
				else if(dx & 1)
				{
					if(dy == m)
						printf("Back\n");
					else
						printf("Right\n");
				}
				else
				{
					if(dy == 1)
						printf("Back\n");
					else
						printf("Left\n");
				}
			}
		}

		else if((sx == n) && (sy == m))
		{
			if(n & 1)
			{
				if((dx == 1) && (dy == 1))
					printf("Over\n");
				else if(dx & 1)
				{
					if(dx == 1)
						printf("Front\n");
					else
						printf("Left\n");
				}
				else
				{
					if(dx == m)
						printf("Front\n");
					else
						printf("Right\n");
				}
			}
			else
			{
				if((dx == 1) && (dy == m))
					printf("Over\n");
				else if(dx & 1)
				{
					if(dx == 1)
						printf("Front\n");
					else
						printf("Left\n");
				}
				else
				{
					if(dx == m)
						printf("Front\n");
					else
						printf("Right\n");
				}
			}
		}

		else if((sx == 1) && (sy == m))
		{
			//if(dx & 1)
			//{
				if(dx & 1)
				{
					if((dx == n) && (dy == 1))
						printf("Over\n");
					else if(dy == 1)
						printf("Back\n");
					else
						printf("Left\n");
				}
				else
				{
					if((dx == n) && (dy == m))
						printf("Over\n");
					else if(dy == m)
						printf("Back\n");
					else
						printf("Right\n");
				}
			//}
		}
		else
		{
			if(n & 1)
			{
				if((dx == 1) && (dy == m))
					printf("Over\n");
				if(dx & 1)
				{
					if(dy == m)
						printf("Front\n");
					else
						printf("Right\n");
				}
				else
				{
					if(dy == 1)
						printf("Front\n");
					else
						printf("Left\n");
				}
			}
			else
			{
				if((dx == 1) && (dy == 1))
					printf("Over\n");
				if(dx & 1)
				{
					if(dy == 1)
						printf("Front\n");
					else
						printf("Left\n");
				}
				else
				{
					if(dy == m)
						printf("Front\n");
					else
						printf("Right\n");
				}
			}
		}
	}
	return 0;
}*/