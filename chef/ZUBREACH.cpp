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
	int t, m, n, l, i, j, rx, ry, x, y;
	string c;
	sd(t);
	for(j=1; j<=t; j++)
	{
		//cout << j << " .. " << t << "\n";
		x=y=0;
		sd(m);
		//cout << "m hai : " << m << "\n";
		sd(n);
		//cout << "n hai : " << n << "\n";
		sd(rx);
		//cout << "rx hai : " << rx << "\n";	
		sd(ry);
		//cout << "ry hai : " << ry << "\n";
		sd(l);
		//cout << "l hai : " << l << "\n";

		cin >> c;
		for(i=0; i<l; i++)
		{
			if(c[i] == 'L')
				x--;
			else if(c[i] == 'U')
				y++;
			else if(c[i] == 'D')
				y--;
			else
				x++;
		}

		if((x == rx) && (y == ry))
			printf("Case %d: REACHED\n", j);
		else if((x < 0) || (y < 0) || (x > m) || (y > n))
			printf("Case %d: DANGER\n", j);
		else
			printf("Case %d: SOMEWHERE\n", j);
	}
	return 0;
}

/*
2
20 20
4 5
13
LLUUUUURRRRRR
10 10
3 4
7
UDUDDRR

Case 1: REACHED
Case 2: DANGER
*/