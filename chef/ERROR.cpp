#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mx 100007
#define sd(x) scanf("%d", &x)
#define sll(x) scanf("%lld", &x)

int main()
{
	int t;
	sd(t);
	while(t--)
	{
		string s;
		ll i, j, k, len, flag = 0;
		cin >> s;
		len = s.length();

		for(i=0; i<len; ++i)
		{
			if(s[i] == '0')
			{
				if(i+1 <= len)
				{
					if(s[i+1] == '1')
					{
						if(i+2 <= len)
						{
							if(s[i+2] == '0')
							{
								printf("Good\n");
								flag = 1;
								break;
							}
						}
					}
				}
			}

			if(s[i] == '1')
			{
				if(i+1 <= len)
				{
					if(s[i+1] == '0')
					{
						if(i+2 <= len)
						{
							if(s[i+2] == '1')
							{
								printf("Good\n");
								flag = 1;
								break;
							}
						}
					}
				}
			}
		}
		if(flag == 0)
			printf("Bad\n");
	}
	return 0;
}

/*
2
11111110
10101010101010

Bad
Good
*/