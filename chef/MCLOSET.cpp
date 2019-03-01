#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d ", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int a[100001];
int main()
{
	int t, n, i, sump, sumc, pp, pc, qp, qc, cp, cc;
	sd(t);
	while(t--)
	{
		sump = 0;	sumc = 0; cp = 0;	cc = 0;
		sd(n);
		for(i=0; i<n; i++)
			sd(a[i]);
		if(n%2 == 0)
		{
			for(i=0; i<n/2; i++)
			{
				//cout << "i : " << i << " , n-i-1 : " << (n-i-1) << "\n"; 
				sumc = (a[i] + a[n-i-1]);
				pc = i+1; qc = n-i;
				cc = abs(pc-qc);

				if((sumc > sump))
				{
					sump = sumc;
					cp = cc;
					pp = pc;
					qp = qc;
				}
				else if((sumc == sump) && (cc > cp))
				{
					sump = sumc;
					cp = cc;
					pp = pc;
					qp = qc;
				}
			}
			pd(sump); pd(pp); pd(qp); printf("\n");
		}
		else
		{
			for(i=0; i<n/2; i++)
			{
				//cout << "i : " << i << " , n-i-1 : " << (n-i-1) << "\n"; 
				sumc = (a[i] + a[n-i-1]);
				pc = i+1; qc = n-i;
				cc = abs(pc-qc);

				if((sumc > sump))
				{
					sump = sumc;
					cp = cc;
					pp = pc;
					qp = qc;
				}
				else if((sumc == sump) && (cc > cp))
				{
					sump = sumc;
					cp = cc;
					pp = pc;
					qp = qc;
				}
			}
			sumc = a[i];
			pc = i+1; qc = i+1;
			cc = abs(pc-qc);
			if((sumc > sump))
			{
				sump = sumc;
				cp = cc;
				pp = pc;
				qp = qc;
			}
			else if((sumc == sump) && (cc > cp))
			{
				sump = sumc;
				cp = cc;
				pp = pc;
				qp = qc;
			}
			pd(sump); pd(pp); pd(qp); printf("\n");
		}
	}
	return 0;
}

/*
3
8
3 4 6 9 10 12 14 16
8
2 4 6 9 10 12 14 16
7 
2 4 6 19 10 12 14 

19 1 8
19 4 5
19 4 4
*/