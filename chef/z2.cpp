#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	unsigned int n,h;
	cin >> n >> h;

	int a[n];
	int i,r,y=0,f=2;;

	for( i=0 ; i<n ; i++ )
	{
		cin >> a[i];
	}

	while( cin >> r )
	{
		if(r == 0)
			break;

		else if ( r == 1 )
		{
			if( y != 0 )
				y=y-1;
		}

		else if ( r == 2 )
		{
			if( y != (n-1) )
				y=y+1;
		}

		else if ( r == 3 )
		{
			if( ( a[y] != 0 ) && ( f == 2 ) )
			{
				a[y] -= 1;
				f = 3;
			}
		}

		else if ( r == 4 )
		{
			if( ( a[y] != h ) && ( f == 3 ) )
			{
				a[y] += 1;
				f = 2;
			}
		}
	}

	for( i=0 ; i<n ; i++ )
	{
		cout << a[i] << " ";
	}

	cout << "\n";
	return 0;
}

/*

3. 1 2 1 4 0 1
> 3
2. 1 2 1 4 0 1
> 2
> 2
> 2
> 2
2 1 2 1 4. 0 1
> 4
2 1 2 1 4. 0 1
> 1
2 1 2 1. 4 0 1
> 3
2 1 2 0. 4 0 1
> 1
2 1 2. 0 4 0 1
> 4
2 1 3. 0 4 0 1
> xx

*/
