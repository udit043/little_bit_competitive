#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx); 

int main()
{
	int t; 
	double x1, x2, x3, v1, v2, i, j, t1, t2;
	sd(t);
	while(t--)
	{
		cin >> x1 >> x2 >> x3 >> v1 >> v2;
		t1 = abs(((x3)-(x1))/v1);
		t2 = abs(((x2)-(x3))/v2);

		if(t1 > t2)
			printf("Kefa\n");
		else if(t2 > t1)
			printf("Chef\n");
		else
			printf("Draw\n");
	}
	return 0;
}

/*
3
1 3 2 1 2
1 5 2 1 2
1 5 3 2 2

Kefa
Chef
Draw
*/