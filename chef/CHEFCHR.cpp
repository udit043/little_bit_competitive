#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,num,c,h,e,f;
	scanf("%d", &t);
	while(t--)
	{
		num = 0;
		string s;
		cin >> s;
		int sl = s.length();

		for(int i=0; i<sl-3; ++i)
		{
			c=h=e=f=0;

			if(s[i] == 'c')
				++c;
			else if(s[i] == 'h')
				++h;
			else if(s[i] == 'e')
				++e;
			else if(s[i] == 'f')
				++f;
			else
				goto hmm;

			if(c+h+e+f != 1)
				goto hmm;

			if(s[i+1] == 'c')
				++c;
			else if(s[i+1] == 'h')
				++h;
			else if(s[i+1] == 'e')
				++e;
			else if(s[i+1] == 'f')
				++f;
			else
				goto hmm;

			if(c+h+e+f != 2)
				goto hmm;

			if(s[i+2] == 'c')
				++c;
			else if(s[i+2] == 'h')
				++h;
			else if(s[i+2] == 'e')
				++e;
			else if(s[i+2] == 'f')
				++f;
			else
				goto hmm;

			if(c+h+e+f != 3)
				goto hmm;

			if(s[i+3] == 'c')
				++c;
			else if(s[i+3] == 'h')
				++h;
			else if(s[i+3] == 'e')
				++e;
			else if(s[i+3] == 'f')
				++f;
			else
				goto hmm;

			if(c+h+e+f != 4)
				goto hmm;

			if( (c == h) && (e == f) && (c == f) && (f == 1) )
			{
				++num;
				c=h=e=f=0;
			}
			else
				c=h=e=f=0;

			hmm:
				c=h=e=f=0;
		}

		if(num != 0)
			printf("lovely %d\n", num);
		else
			printf("normal\n");
	}
	return 0;
}

/*
5
ifchefisgoodforchess
fehcaskchefechohisvoice
hecfisaniceperson
letscallchefthefch
chooseaprogrammer

lovely 2
lovely 3
lovely 1
lovely 3
normal
*/