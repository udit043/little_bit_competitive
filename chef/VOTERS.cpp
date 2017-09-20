#include <bits/stdc++.h>
using namespace std;

#define mx 1000007
#define sd(x) scanf("%d", &x)
int a[mx];

int main()
{
	memset(a, 0, sizeof(a));
	int n1,n2,n3,i,j=0,k;
	sd(n1); sd(n2); sd(n3);

	for(i=1; i<=n1+n2+n3; ++i)
	{
		sd(k);
		a[k] += 1;
	}
	for(i=1; i<=mx; ++i)
		if(a[i] > 1)
			++j;
	cout << "\n" << j << "\n";
	for(i=1; i<=mx; ++i)
	{
		if(a[i] >= 2)
			cout << i << "\n";
	}
	return 0;
}

/*
5 6 5
23
30
42
57
90
21 
23 
35 
57 
90 
92 
21 
23 
30 
57 
90 

5
21 
23 
30 
57 
90
*/