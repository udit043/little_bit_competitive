#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s,res;
		cin >> s;
		int lh = s.length();
		string sym[lh][lh];
		int l=0,r=0,ar[lh];
		memset(ar, 0, sizeof ar);
		for(int i=0; i<lh; i++)
		{
			if(s[i] == '(')
			{
				l++;r=0;
			}
			else if(   (s[i] == 'a') || (s[i] == 'b') || (s[i] == 'c') || (s[i] == 'd') ||
					   (s[i] == 'e') || (s[i] == 'f') || (s[i] == 'g') || (s[i] == 'h') ||
					   (s[i] == 'i') || (s[i] == 'j') || (s[i] == 'k') || (s[i] == 'l') ||
					   (s[i] == 'm') || (s[i] == 'n') || (s[i] == 'o') || (s[i] == 'p') ||
					   (s[i] == 'q') || (s[i] == 'r') || (s[i] == 's') || (s[i] == 't') ||
					   (s[i] == 'u') || (s[i] == 'v') || (s[i] == 'w') || (s[i] == 'x') ||
					   (s[i] == 'y') || (s[i] == 'z') 
					)
			{
				res = res + s[i];
			}
			else if( s[i] == ')')
			{
				for(int p=0; p<ar[l]; p++)
				{
					res = res + sym[l][p];
					//cout << "sym["<<l<<"]["<<p<<"]:"<<sym[l][p]<<"\n";
				}
				r = 0;l--;
			}
			else
			{
				sym[l][r] = s[i];
				ar[l] += 1;
				r++;
			}
		}
		cout << res << "\n";
	}
	return 0;
}

/*
3
(a+(b*c))
((a+b)*(z+x))
((a+t)*((b+(a+c))^(c+d)))

*/