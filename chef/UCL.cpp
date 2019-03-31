#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int main()
{
	ll t, g1, g2, i, j, k, teamg[4], point[4], t1, t2, in, a[4], b[4];
	string one, vs, two, teams[4];
	
	sll(t);
	while(t--)
	{
		for(k=0; k<4; k++)
		{
			teamg[k] = 0;
			point[k] = 0;
			a[k] = 0;
			b[k] = 0;
		}

		for(i=0, in=0; i<12; i++)
		{
			cin >> one;	cin >> g1;	cin >> vs;	cin >> g2;	cin >> two;
			t1=t2=1;

			for(j=0; j<4; j++)
			{
				if(one == teams[j])
				{
					t1=0;
					teamg[j] = (teamg[j] + g1 - g2);
					if(g1 > g2)
						point[j] += 3;
					else if(g1 == g2)
						point[j]++;
				}
				if(two == teams[j])
				{
					t2=0;
					teamg[j] = (teamg[j] + g2 - g1);
					if(g1 < g2)
						point[j] += 3;
					else if(g1 == g2)
						point[j]++;
				}
			}
			if(t1 == 1)
			{
				teams[in] = one;
				teamg[in] = g1-g2;
				if(g1 > g2)
					point[in] = 3;
				else if(g1 == g2)
					point[in] = 1;
				in++;
			}
			if(t2 == 1)
			{
				teams[in] = two;
				teamg[in] = g2-g1;
				if(g1 < g2)
					point[in] = 3;
				else if(g1 == g2)
					point[in] = 1;
				in++;
			}
		}
		
		a[0]=point[0];	a[1]=point[1];	a[2]=point[2];	a[3]=point[3];
		sort(a, a+4);
		b[0]=teamg[0];	b[1]=teamg[1];	b[2]=teamg[2];	b[3]=teamg[3];
		sort(b, b+4);

		if(a[3] != a[2])
		{
			for(k=0; k<4; k++)
			{
				if(a[3] == point[k])
				{
					cout << teams[k] << " ";
					k=4;
				}
			}
			for(k=0; k<4; k++)
			{
				if(a[2] == point[k])
				{
					cout << teams[k] << "\n";
					k=4;
				}
			}
		}
		else
		{
			for(k=0; k<4; k++)
			{
				if((a[3] == point[k]) && (teamg[k] == b[3]))
				{
					cout << teams[k] << " ";
					k=4;
				}
			}
			for(k=0; k<4; k++)
			{
				if((a[2] == point[k]) && (teamg[k] == b[2]))
				{
					cout << teams[k] << "\n";
					k=4;
				}
			}
		}
	}
	return 0;
}

/*
2
manutd 8 vs. 2 arsenal
lyon 1 vs. 2 manutd
fcbarca 0 vs. 0 lyon
fcbarca 5 vs. 1 arsenal
manutd 3 vs. 1 fcbarca
arsenal 6 vs. 0 lyon
arsenal 0 vs. 0 manutd
manutd 4 vs. 2 lyon
arsenal 2 vs. 2 fcbarca
lyon 0 vs. 3 fcbarca
lyon 1 vs. 0 arsenal
fcbarca 0 vs. 1 manutd
a 3 vs. 0 b
a 0 vs. 0 c
a 0 vs. 0 d
b 0 vs. 0 a
b 4 vs. 0 c
b 0 vs. 0 d
c 0 vs. 0 a
c 0 vs. 0 b
c 1 vs. 0 d
d 3 vs. 0 a
d 0 vs. 0 b
d 0 vs. 0 c

manutd fcbarca
d b
*/

/*
1
manutd 8 vs. 2 arsenal
lyon 1 vs. 2 manutd
fcbarca 0 vs. 0 lyon
fcbarca 5 vs. 1 arsenal
manutd 3 vs. 1 fcbarca
arsenal 6 vs. 0 lyon
arsenal 0 vs. 0 manutd
manutd 4 vs. 2 lyon
arsenal 2 vs. 2 fcbarca
lyon 0 vs. 3 fcbarca
lyon 1 vs. 0 arsenal
fcbarca 0 vs. 1 manutd


1
a 3 vs. 0 b
a 0 vs. 0 c
a 0 vs. 0 d
b 0 vs. 0 a
b 4 vs. 0 c
b 0 vs. 0 d
c 0 vs. 0 a
c 0 vs. 0 b
c 1 vs. 0 d
d 3 vs. 0 a
d 0 vs. 0 b
d 0 vs. 0 c


*/

//			for(k=0; k<4; k++)
//			{
//				cout << teams[k] << ": " << point[k] << " points, goal difference " << teamg[k];
//				cout << "...\n";
//			}