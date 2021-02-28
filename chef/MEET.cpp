#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n", x)
//fill_n(a, 102, mx);
int a[501];
int convert(string chk, string chk2);

int main()
{
	int t, i, n, j, chi, in1i, in2i;
	string ch, ch1, in1, in11, in2, in22;
	
	sd(t);
	while(t--)
	{
		cin >> ch >> ch1;
		chi = convert(ch, ch1);
		sd(n);
		for(i=0; i<n; i++)
		{
			cin >> in1 >> in11;
			in1i = convert(in1, in11);

			cin >> in2 >> in22;
			in2i = convert(in2, in22);

			if((in1i <= chi) && (chi <= in2i))
				a[i]=1;
			else
				a[i]=0;
		}
		for(i=0; i<n; i++)
			cout << a[i];
		cout << "\n";
	}
	return 0;
}

int convert(string chk, string chk2)
{
	int n;
	if(chk2[0] == 'A')
	{
		if((chk[0] == '1') && (chk[1] == '2'))
		{
			n = 0;
		}
		else if(chk[0] == '0')
		{
			n = (int)chk[1]-48;
			n *= 60;
		}
		else if(chk[0] == '1')
		{
			if(chk[1] == '0')
				n = 600;
			else
				n = 660;
		}
	}
	else if (chk2[0] == 'P')
	{
		if((chk[0] == '1') && (chk[1] == '2'))
		{
			n = 720;
		}
		else if(chk[0] == '0')
		{
			n = (int)chk[1]-48;
			n *= 60;
			n += 720;
		}
		else if(chk[0] == '1')
		{
			if(chk[1] == '0')
				n = 1320;
			else
				n = 1380;
		}
	}
	n = n + ((int)chk[3]-48)*10;
	n = n + ((int)chk[4]-48);
	return n;
}

/*
2
12:01 AM
4
12:00 AM 11:42 PM
12:01 AM 11:59 AM
12:30 AM 12:00 PM
11:59 AM 11:59 PM
04:12 PM
5
12:00 AM 11:59 PM
01:00 PM 04:12 PM
04:12 PM 04:12 PM
04:12 AM 04:12 AM
12:00 PM 11:59 PM

1100
11101
*/