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
	int t, i, c;
	string s;
	sd(t);
	while(t--)
	{
		c = 0;
		cin >> s;
		for(i=0; i<7; i++)
		{
			if(s[i] == '1')
			{
				if(s[i+1] == '0')
					c++;
			}
			else if(s[i] == '0')
			{
				if(s[i+1] == '1')
					c++;
			}		
//			cout << "i & c are : " << i << " " << c << "\n";
		}
		if(s[0] != s[7])
			c++;
//		cout << "c is : .." << c << "\n";
		if(c <= 2)
			printf("uniform\n");
		else
			printf("non-uniform\n");
	}
	return 0;
}

/*
4
00000000
10101010
10000001
10010011

uniform
non-uniform
uniform
non-uniform
*/