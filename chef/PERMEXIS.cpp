#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long int n, k=0, i, j;
		scanf("%lld", &n);
		long long int a[n];

		for(i=0; i<n; ++i)
			scanf("%lld", &a[i]);

		sort(a, a+n);

		for(i=0; i<n-1; ++i)
		{
			if( abs(a[i] - a[i+1]) > 1 )
			{
				k = 1;
				break;
			}
		}
		if(k == 1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}

/*
2
4
3 2 2 3 
2
1 5

YES
NO
*/