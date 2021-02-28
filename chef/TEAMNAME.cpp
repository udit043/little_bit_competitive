#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);

int main()
{
	int a[26], b[26];
	int t, n, i, j, k, count, ans;
	char c; bool flag;
	string s[20002], s1[20002], in1, in2;

	sd(t);
	while(t--)
	{
		ans=0;	count=0;
		for(i=0; i<26; i++)
		{
			a[i]=b[i]=0;
		}
		sd(n);
		for(i=0; i<n; i++)
		{
			cin >> s[i];
			a[((int)(s[i][0]))-97] += 1;
		}
		for(i=0; i<n; i++)
		{
			in1 = s[i];
			for(j=0; j<26; j++)
			{
				if(a[j] != 0)
				{
					flag = true;
					//cout << ((int(in1[0]))  -  97) << " dekho\n";
					if(  ((int(in1[0]))  -  97) != j)
					{
						in1[0]=((char)(j+97));
						for(k=0; k<n; k++)
						{
							if(in1 == s[k])
							{
								flag = false;
								break;
							}
						}
						if(flag)
						{
							b[j] += 1;
							s1[count] = in1;
							count++;
						}
					}
				}
			}
		}
		ans=0;
		for(i=0; i<count; i++)
		{
//			cout << s1[i] << " \n";
			flag = true;
			for(j=i+1; j<count; j++)
			{
				if(s1[i] == s1[j])
				{
					flag = false;
					s1[j] = "**";
				}			
			}
		}
		for(i=0; i<count; i++)
		{
			if(s1[i] != "**")
			{
				ans++;
			}
		}
		pd(ans);
	}
	return 0;
}

/*
3
2
suf mas
3
good game guys
4
hell bell best test

2
0
2
*/