#include <bits/stdc++.h>
using namespace std;

#define ll long long
int a[10];

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		ll i, j, k;
		memset(a, 0, sizeof(a));
		for(i=0; i<s.length(); ++i)
		{
			a[(int(s[i])-48)] += 1;
		}

		if(a[6] >= 1)
		{
			if(a[5] >= 1)
				printf("A");
			if(a[6] >= 2)
				printf("B");
			if(a[7] >= 1)
				printf("C");
			if(a[8] >= 1)
				printf("D");
			if(a[9] >= 1)
				printf("E");
		}
		if(a[7] >= 1)
		{
			if(a[0] >= 1)
				printf("F");
			if(a[1] >= 1)
				printf("G");
			if(a[2] >= 1)
				printf("H");
			if(a[3] >= 1)
				printf("I");
			if(a[4] >= 1)
				printf("J");
			if(a[5] >= 1)
				printf("K");
			if(a[6] >= 1)
				printf("L");
			if(a[7] >= 2)
				printf("M");
			if(a[8] >= 1)
				printf("N");
			if(a[9] >= 1)
				printf("O");
		}
		if(a[8] >= 1)
		{
			if(a[0] >= 1)
				printf("P");
			if(a[1] >= 1)
				printf("Q");
			if(a[2] >= 1)
				printf("R");
			if(a[3] >= 1)
				printf("S");
			if(a[4] >= 1)
				printf("T");
			if(a[5] >= 1)
				printf("U");
			if(a[6] >= 1)
				printf("V");
			if(a[7] >= 1)
				printf("W");
			if(a[8] >= 2)
				printf("X");
			if(a[9] >= 1)
				printf("Y");
		}
		if(a[9] >= 1)
		{
			if(a[0] >= 1)
				printf("Z");
		}
		printf("\n");
	}
	return 0;
}

/*
4
65
566
11
1623455078

A
AB

ACDFGHIJKLNPQRSTUVW
*/

/*
65	A 		78	N
66	B 		79	O
67	C 		80	P
68	D 		81	Q
69	E 		82	R
70	F  		83	S
71	G 		84	T
72	H 		85	U
73	I 		86	V
74	J  		87	W
75	K  		88	X
76	L 		89	Y
77 	M 		90	Z
*/

/*while(t--)
	{
		memset(a, false, sizeof(a));
		memset(flag, false, sizeof(flag));
		ll i, j, k, k1, k2;
		string n;
		cin >> n;

		for(i=0; i<n.length(); ++i)
		{
			for(j=i+1; j<n.length(); ++j)
			{
				k1 = (int(n[i])-48) * 10 + (int(n[j])-48);
				k2 = (int(n[j])-48) * 10 + (int(n[i])-48);
//				cout << k1 << ".." << k2 << "\n";

				if(k1 >= 65 && k1 <= 90)
				{
					//cout << (char)k1 ;
					a[k1-65] = true;
				}
				if(k2 >= 65 && k2 <= 90)
				{
					//cout << (char)k2 ;
					a[k2-65] = true;
				}
			}
		}
		for(k=0; k<26; ++k)
		{
			if(a[k] == true)
			{
				if(flag[k] == false)
				{
					cout << (char)(k+65);
					flag[k] = true;
				}
			}
		}
		cout << "\n";
	}*/

/*

namespace patch
{
	template < typename T > std::string to_string( const T& n )
	{
		std::ostringstream stm ;
		stm << n ;
		return stm.str() ;
	}
}

for(i=0; i<105; ++i)
{
	n = patch::to_string(i);
	cout << n << "\n";
}
*/

		/*for(i=0; i<n.length(); ++i)
		{
			a[(int)(n[i]-48)] += 1;
		}

		for(i=6; i<10; ++i)
		{
			if(a[i] >= 1)
			{
				for(j=0; j<10; ++j)
				{
					if(a[j] >= 1)
					{
						if( (i == j) && (a[i] > 1) )
							cout << b[i][j];
						else if(i != j)
							cout << b[i][j];
					}
				}
			}
		}*/


//		for(i=0; i<10; ++i)
//			cout << a[i] << " ";
//		cout << "\n";