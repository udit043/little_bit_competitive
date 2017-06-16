#include <iostream>
#include <cstdio>
using namespace std;

#define lg long long

int main()
{
	lg t;
	scanf("%lld", &t);
	while(t--)
	{
		lg n,m,i,j,f; char c;

		scanf("%lld %lld", &n, &m);

		char a[n][m];

		for(lg i=0; i<n; i++)
		{
			for(lg j=0; j<m; j++)
			{
				scanf(" %c", &a[i][j]);

				/*if( c == 'A')
					a[i][j] = 0;
				else if( c == 'W')
					a[i][j] = 1;
				else
					a[i][j] = 2;*/
			}
		}

		for(i=n-1; i>=0; i--)
		{
			f = 1;
			for(j=0; j<m; j++)
			{
				if( i == (n-1) )
				{
					if(a[i][j] == 'W')
					{
						if( (j == 0) || (j == (m-1)) || (a[i][j-1] == 'A') || (a[i][j+1] == 'A') )
						{
							f = 5;
							break;
						}
					}
				}
				else
				{
					if(a[i][j] == 'B')
					{
						//sb++;
						if(a[i+1][j] != 'B')
						{
							f = 5;
							break;
						}
					}
					else if(a[i][j] == 'W')
					{
						if( (j == 0) || (j == (m-1)) || (a[i+1][j] == 'A') || (a[i][j-1] == 'A') || (a[i][j+1] == 'A') )   // || (sb == 0)
						{
							f = 5;
							break;
						}
					}
				}
			}

			if( f == 5 )
			{
				cout << "no\n";
				break;
			}
		}
		if( f != 5 )
			cout << "yes\n";
	}
	return 0;
}

/*
6
2 2
WW
BB
2 3
BWB
BBB
2 3
AWA
BBB
2 3
BAA
ABB
3 5
BWAAB
BWBWB
BBBBB
3 3
BBB
BAB
BBB

*/

/*					if( a[i][j] != 2 )
					{
						if(n == 1)
						{
							if(a[i][j] == 1)
							{
								f = 5;
								break;
							}
						}
						else
						{
							if(a[i][j] == 0)
							{
								if( (a[i-1][j] == 1) || (a[i-1][j] == 2) )
								{
									f = 5;
									break;
								}
							}
							if(a[i][j] == 1)
							{
								if(a[i-1][j] == 2)
								{
									f = 5;
									break;
								}
							}
						}
					}*/