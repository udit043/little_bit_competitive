#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)
//fill_n(a, 102, mx); 

int main()
{
	int t, d, i, a[7];
	string s;
	sd(t);
	while(t--)
	{
		for(i=0; i<7; i++)
			a[i] = 4; 
		
		sd(d);
		cin >> s;

		if(s == "mon")
			i=0;
		else if(s == "tues")
			i=1;
		else if(s == "wed")
			i=2;
		else if(s == "thurs")
			i=3;
		else if(s == "fri")
			i=4;
		else if(s == "sat")
			i=5;
		else if(s == "sun")
			i=6;

		if(d == 29)
		{
			a[i]++;
		}
		else if(d == 30)
		{
			a[i]++;
			if(i == 6)
				a[0]++;
			else
				a[i+1]++;

		}
		else if(d == 31)
		{
			a[i]++;
			if(i == 6)
			{
				a[0]++;
				a[1]++;
			}
			else
			{
				a[i+1]++;
				if(i == 5)
					a[0]++;
				else
					a[i+2]++;
			}
		}

		for(i=0; i<7; i++)
			cout << a[i] << " ";
		cout << "\n";
	}
	return 0;
}

/*
6
28 mon
30 wed
30 thurs
30 fri
30 sat
30 sun


4 4 4 4 4 4 4
4 4 5 5 5 4 4
*/