#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

int main()
{
	int t, d, i, j, k, f, c, pr;
	float p, pp;
	string s;
	sd(t);
	while(t--)
	{
		c=pr=0;
 		sd(d);
 		cin >> s;

 		for(i=0; i<d; i++)
 		{
 			if(s[i] == 'P')
 				++c;
 		}
 		p = (float)c/d;
 		//cout << "count of P " << c << "\n percentage .. " << p << " " << c << " " << d << "\n";
 		if((p < 0.75) and (d>=5))
 		{
 			for(i=2; i<d-2; i++)
 			{
 				if((s[i] == 'A') and (((s[i-1] == 'P') or (s[i-2] == 'P')) and ((s[i+1] == 'P') or (s[i+2] == 'P'))))
 					++pr;
 				//cout << "hi\n";
 			}
 			//cout << "pr " << pr << "\n";
 			for(i=1; i<=pr; i++)
 			{
 				++c;
 				p = (float)c/d;
 				if(p >= 0.75)
 				{
 					cout << i << "\n";
 					break;
 				}
 			}
 		}

 		if(p < 0.75)
 			cout << "-1\n";
 		//cout << "count of P " << c << "\n percentage .. " << p << " " << c << " " << d << "\n";
	}
	return 0;
}