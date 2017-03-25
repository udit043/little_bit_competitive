#include <bits/stdc++.h>
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
	long long int n,i,j;
	n = get_i();
	long long int a[n+1];
	memset(a, 0, sizeof a);
	for(i=0; i<n; i++)
	{
		j = get_i();
		a[j]=1;
	}
	for(i=0; i<=n; i++)
	{
		if(a[i] == 0)
			printf("%lld ",i);//cout << i << " ";
	}
	printf("\n");
	return 0;
}

/*
6
0 1 1 2 2 3

4 5 6
*/