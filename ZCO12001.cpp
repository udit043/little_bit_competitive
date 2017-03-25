#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

static long int get_i()
{
	char c=getchar();
	while(c<'0'||c>'9')
	c=getchar();
	long int ret=0;
	while(c>='0'&&c<='9')
	{
		ret=ret*10+c-'0';
		c=getchar();
	}
	return ret;
}

int main()
{
	long long int n, i, k=0, depth=0, index=0, depth1=0, index1=0, index1ans=0;
	n = get_i();
	long long int a[n];
	for(i=0; i<n; i++)
	{
		a[i] = get_i();

		if(a[i] == 1)
		{
			k++;
			if( k == 1 )
				index1=i;
		}
		else
		{
			if( max(depth, k) > depth )
			{
				depth = max(depth, k);
				index = i;
			}
			if( k == 1 )
			{
				if( max(depth1, i-index1) > depth1 )
				{
					depth1 = max(depth1, i-index1);
					index1ans = index1;
				}
			}
			k--;
		}
	}
	cout << depth << " " << index << " " << depth1+1 << " " << index1ans+1 << "\n";
//	cout << "depth : " << depth << "\n";
//	cout << "index : " << index << "\n";
//	cout << "depth1 : " << depth1+1 << "\n";
//	cout << "index1ans : " << index1ans+1 << "\n";
	return 0;
}

/*
20
1 2 1 1 2 2 1 2 1 1 2 1 2 2 1 1 2 1 2 2

2 4 6 9
*/