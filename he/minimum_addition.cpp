#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx);

ll a[100000], ab[100000][32], b[32]; 

int main()
{
	//cout << "hello\n";
	ll n, i, j, q, l, r, c, p, num;
	sll(n);
	for(i=0; i<n; i++)
	{
		sll(a[i]);
	}
//cout << "hello2\n";
	for(i=0; i<n; i++)
	{
		if(!(a[i] & 1))
		{
			ab[i][0] = 1;
		}
		for(j=1; j<32; j++)
		{
			if((a[i] >> (j)) & 1)
			{
				ab[i][j] = 0;
			}
			else
			{
				p = pow(2, j);
				ab[i][j] = (p - (a[i]%p));
			}
		}
	}
//cout << "hello3\n";
	sll(q);
	while(q--)
	{
		c = LONG_MAX;
		fill_n(b, 32, 0);
		sll(l);	sll(r);

		for(j=0; j<32; j++)
		{
			num=0;
			for(i=l-1; i<r; i++)
			{
				num += ab[i][j];
			}
			c = min(c, num);
		}
		pll(c);
	}
	return 0;
}

/*
5
4 3 2 4 1
4
1 4
2 3
4 4
4 5

3
0
0
1
*/

/*
int main()
{
	ll n, a[mx], b[32]={0}, i, j, k, q, l, r, c, p, num;
	sll(n);
	for(i=0; i<n; i++)
	{
		sll(a[i]);
	}

	sll(q);
	while(q--)
	{
		c = ULONG_MAX;
		fill_n(b, 32, 0);
		sll(l);	sll(r);

		for(i=l-1; i<r; i++)
		{
			if(!(a[i] & 1))
			{
//				cout <<"yo\n";
				b[0] += 1;
			}

			//cout << b[0] << " .. \n";

			for(j=1; j<32; j++)
			{
				//int ch = ((a[i] >> (j-1)) & 1);
				//cout << "ch " << ch << "\n";
				if((a[i] >> (j)) & 1)
				{
					b[j] += 0;
//					cout << j << " han andar "<< b[j] << "\n";
				}
				else
				{
					p = pow(2, j);
					b[j] += (p - (a[i]%p));
//					cout << j << "       bahar "<< b[j] << "\n";
				}
//				cout << j << " ye 2 wala " << b[2] << " .. \n";
			}
		}
		for(j=0; j<32; j++)
		{
//			cout << j << " : " << b[j] << "\n";
			c =	min(c, b[j]);
		}
		pll(c);
	}
	return 0;
}*/
