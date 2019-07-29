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
	int t, n, i;
	string s;
	int cw, sl, ey, eym, m, mh, h;
	sd(t);
	while(t--)
	{	
		cw = sl = ey = eym = m = mh = h = 0;
		sd(n);
		for(i=0; i<n; i++)
		{
			cin >> s;
			if(s == "cakewalk")
				cw++;
			else if(s == "simple")
				sl++;
			else if(s == "easy")
				ey++;
			else if(s == "easy-medium")
				eym++;
			else if(s == "medium")
				m++;
			else if(s == "medium-hard")
				mh++;
			else
				h++;
		}
		if((cw == 1) && (sl == 1) && (ey == 1) && ((eym == 1) || (m == 1)) && ((mh == 1) || (h == 1)))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}

/*
3
5
easy
medium
medium-hard
simple
cakewalk
7
simple
simple
medium
medium
easy-medium
cakewalk
easy
7
cakewalk
simple
easy
easy-medium
medium
medium-hard
hard

Yes
No
Yes
*/