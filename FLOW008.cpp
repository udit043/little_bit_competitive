#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld", &n);
		if(n<10)
			printf("What an obedient servant you are!\n");
		else
			printf("-1\n");
	}
	return 0;
}