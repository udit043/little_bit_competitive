#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx); 

int main()
{
	int t, n, i, m, a, b, num;
	sd(t);
	while(t--)
	{
		m=a=b=0;
		sd(n);
		for(i=0; i<n; i++)
		{
			sd(num);
			m = max(m, num);
			a += num;
		}
		a -= m;
		m=0;
		for(i=0; i<n; i++)
		{
			sd(num);
			m = max(m, num);
			b += num;
		}
		b -= m;

//		cout << "Alice " << a << " Bob " << b << "\n";

		if(a < b)
			printf("Alice\n");
		else if(a > b)
			printf("Bob\n");
		else
			printf("Draw\n");
	}
	return 0;
}

/*
3
5
3 1 3 3 4
1 6 2 5 3
5
1 6 2 5 3
3 1 3 3 4
3
4 1 3
2 2 7

Alice
Bob
Draw
*/