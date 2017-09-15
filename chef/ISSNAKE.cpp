// incomplete

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int size,i,j,f=0,count=0;
		cin >> size;
		string s1,s2;
		cin >> s1 >> s2;

		for(i=0,j=0; (i<size) && (i > -1) && (j<size) && (j > -1); )
		{
			if(s1[i] == '#')
			{
				if(s1[i+1] == '#')
					i++;
				else if(s2[i] == '#')
			}
		}
	}
	return 0;
}

/*
6
2
##
..
2
##
.#
2
#.
.#
7
#.###..
#######
6
##.#..
.###..
5
##.##
.#.#.

*/

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int size,i,j,f=0,count=0;
		cin >> size;
		char a[2][size];
		for(i=0; i<2; ++i)
		{
			for(j=0; j<size; ++j)
			{
				cin >> a[i][j];
			}
		}

		
		for(j=0,i=0; j<size-1; )
		{
			cout << j << " .. ";
			if(a[i][j] == '#')
			{
				a[i][j] = '*';
				if(a[i][j+1] == '#')
					++j;
				else if( (a[i+1][j] == '#') && (i == 0) )
					++i;
				else if( (a[i-1][j] == '#') && (i == 1) )
					--i;
				else if( (a[i][j-1]] == '#') && (j != 0) )
					--j;
				else
				{
					f=1;
					break;
				}
			}
			else if(a[i][j] == '.')
			{
				if( ((a[i+1][j]) == '#') && (i == 0) )
					++i;
				else if( ((a[i-1][j]) == '#') && (i == 1) )
					--i;
				else
				{
					f=1;
					break;
				}
			}
		}

		for(i=0; i<2; ++i)
		{
			for(j=0; j<size; ++j)
			{
				if(a[i][j] == '#')
				{
					f=1;
					break;
				}
			}
		}

		if(f == 1)
			cout << "no\n";
		else
			cout << "yes\n";
	}
	return 0;
}*/

/*
		for(i=0; i<size-1; i++)
		{
			if(s1[i] == '#')
			{
				if( (s1[i+1] != '#') && (s2[i] != '#') || (count != 0) )
				{
					f=1;
					break;
				}
			}
			if(s1[i] == '.')
			{
				if(s2[i] == '.')
					count++;
			}
		}
		cout << "count " << count << "\n";
		if(f == 0)
			cout << "yes\n";
		else
			cout << "no\n";
*/