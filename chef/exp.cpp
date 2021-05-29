#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int main()
{
	string a;
	cin >> a;

	cout << (int)a[2] << ".\n";

	a[2] = char( (int)a[2]+2);

	cout << (int)a[2] << "...\n";
	cout << a << "\n";
//	k = ((int)(k * 100 + .5) / 100.0);
//	printf("%.2f\n", k);  45.587 -> 45.58
	int b[4][5];
	for(int i=0; i<4; i++)
		for(int j=0; j<5; j++)
			b[i][j]=i*10+j;
	cout << *(b[1]+9) << "\n";

	//return 0;
}

