#include <bits/stdc++.h>
using namespace std;

#define GETCHAR getchar_unlocked
inline int readInt() 
{
	int n = 0;
	char c;
	while (1)
	{ 
		c=GETCHAR();
		if(c=='\n'||c==' ') break;
			n = n * 10 + c - '0';
	}
	return n;
}

int main()
{
	while(1)
	{
		long long int n,p,f=0;
		n = readInt();
		if(n != 0)
		{
			long long int a[n];
			for(int i=0; i<n; i++)
			{
				a[i] = readInt();
			}
			for(int i=0; i<n; i++)
			{
				if(i+1 != a[a[i]-1])
				{
					f=1;
					break;
				}
			}
			printf("%s\n",f?"not ambiguous":"ambiguous");
		}
		else
			return 0;
	}
}

/*
4
1 4 3 2
5
2 3 4 5 1
1
1
0

*/