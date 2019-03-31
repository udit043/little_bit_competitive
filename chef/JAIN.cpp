#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx); 
ll a[100001], b[32];
int main()
{
	ll t, n, i, j, aa, ee, ii, oo, uu, k;
	string s;
	sll(t);
	while(t--)
	{
		k=0;
		sll(n);
		fill_n(a, n, 0);
		fill_n(b, 32, 0);
		for(i=0; i<n; i++)
		{
			aa=ee=ii=oo=uu=0;
			cin >> s;
			for(j=0; j<s.length(); j++)
			{
				if(s[j] == 'a')
					aa = 1;
				else if(s[j] == 'e')
					ee = 1;
				else if(s[j] == 'i')
					ii = 1;
				else if(s[j] == 'o')
					oo = 1;
				else if(s[j] == 'u')
					uu = 1;
			}
			a[i] = 16*aa + 8*ee + 4*ii + 2*oo + 1*uu;
			++b[a[i]];
		}

		for(i=0; i<32; i++)
		{
			for(j=i+1; j<32; j++)
			{
				if((b[i] > 0) && (b[j] > 0))
				{
					if(((i | j) == 31) && (i != j))
					{
						k = k+(b[i]*b[j]);
					}
				}
			}
			if((i == 31) && (b[31] > 0))
				k = k+(b[31]*(b[31]-1))/2;
		}		
		pll(k);
	}
	return 0;
}

/*
1
3
aaooaoaooa
uiieieiieieuuu
aeioooeeiiaiei

2
---------------------
1
6
aaooaoaooa
uiieieiieieuuu
aeioooeeiiaiei
aaooaoaooa
uiieieiieieuuu
aeioooeeiiaiei

8
---------------------
1
9
aaooaoaooa
uiieieiieieuuu
aeioooeeiiaiei
aaooaoaooa
uiieieiieieuuu
aeioooeeiiaiei
aaooaoaooa
uiieieiieieuuu
aeioooeeiiaiei

18
*/

			/*if(aa == 1)
				a[i] *= 2;
			if(ee == 1)
				a[i] *= 3;
			if(ii == 1)
				a[i] *= 5;
			if(oo == 1)
				a[i] *= 7;
			if(uu == 1)
				a[i] *= 11;*/

/*for(i=0; i<n; i++)
		{
			cout << "upr " << a[i] << "\n";
			if(a[i] == 11)
			{
				if(binary_search(a, a + n, 210))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 7)
			{
				if(binary_search(a, a + n, 330))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 77)
			{
				if(binary_search(a, a + n, 30))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 5)
			{
				if(binary_search(a, a + n, 462))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 55)
			{
				if(binary_search(a, a + n, 42))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 35)
			{
				if(binary_search(a, a + n, 66))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 385)
			{
				if(binary_search(a, a + n, 6))
				{
					++k;
					a[i] = 1;
				}
			}
// --------------------------------------------------------
			else if(a[i] == 3)
			{
				if(binary_search(a, a + n, 770))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 33)
			{
				if(binary_search(a, a + n, 70))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 21)
			{
				if(binary_search(a, a + n, 110))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 231)
			{
				if(binary_search(a, a + n, 10))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 15)
			{
				if(binary_search(a, a + n, 154))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 165)
			{
				if(binary_search(a, a + n, 14))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 105)
			{
				if(binary_search(a, a + n, 22))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 1155)
			{
				if(binary_search(a, a + n, 2))
				{
					++k;
					a[i] = 1;
				}
			}
// --------------------------------------------------------
			else if(a[i] == 2)
			{
				if(binary_search(a, a + n, 1155))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 22)
			{
				if(binary_search(a, a + n, 105))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 14)
			{
				if(binary_search(a, a + n, 165))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 154)
			{
				if(binary_search(a, a + n, 15))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 10)
			{
				if(binary_search(a, a + n, 231))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 110)
			{
				if(binary_search(a, a + n, 21))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 70)
			{
				if(binary_search(a, a + n, 33))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 770)
			{
				if(binary_search(a, a + n, 3))
				{
					++k;
					a[i] = 1;
				}
			}
// --------------------------------------------------------
			else if(a[i] == 6)
			{
				if(binary_search(a, a + n, 385))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 66)
			{
				if(binary_search(a, a + n, 35))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 42)
			{
				if(binary_search(a, a + n, 55))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 462)
			{
				if(binary_search(a, a + n, 5))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 30)
			{
				if(binary_search(a, a + n, 77))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 330)
			{
				if(binary_search(a, a + n, 7))
				{
					++k;
					a[i] = 1;
				}
			}
			else if(a[i] == 210)
			{
				if(binary_search(a, a + n, 11))
				{
					++k;
					a[i] = 1;
				}
			}
			else
				{}
			cout << "niche " << a[i] << "\n";
		}*/