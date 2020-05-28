// incomplete dp

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
	int t;
	ll x, y, l, r, z, i, j, k, d1;
	string b1, b2, b3, b4, a1, a2;
	sd(t);

	while(t--)
	{
		sll(x);	sll(y);	sll(l);	sll(r);

		b1 = bitset<48>(x).to_string();
		b2 = bitset<48>(y).to_string();
		b3 = bitset<48>(l).to_string();
		b4 = bitset<48>(r).to_string();

		a1=b1;
		a2=b3;
		for(i=0; i<48; i++)
		{
			if(b2[i] == '1')
				a1[i] = '1';
		}

		d1 = bitset<48>(a1).to_ulong();

		if((d1 <= r) && (d1 >= l))
			cout << d1 << "\n";

		if(d1 > r)
		{
			bool f=false;
			for(i=0; i<48; i++)
			{
				if((b4[i] == '0') && (f == false))
				{
					a1[i] = '0';
				}
				else
				{
					f = true;
					a1[i] = '0';
					break;
				}
				if(f == true)
					a1[i] = '1';
			}
			d1 = bitset<48>(a1).to_ulong();
			cout << d1 << "\n";
		}
	}
	return 0;
}