#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d ", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld ", x)

int n, num_com;
list<string> s;
list<string>::iterator iter, first, current;
string ss, com, buffer;

void print_s()
{
	for(iter = s.begin(); iter != s.end(); ++iter)
	{
		cout << *iter << "\n";
	}
}

void move_from_first(int m)
{
	first = s.begin();
	advance(first, m-1);
}

void insrt(int m)
{
	for(int i=0; i<m; i++)
	{
		fflush(stdin);
		getline(cin, ss);
		fflush(stdin);
		if((i == 0) && (s.size() == 0))
		{
			s.push_back(ss);
			move_from_first(2);
		}
		else if(i == 0)
		{
			*first = *first + ss;
			++first;
		}
		else
			s.insert(first, ss);
	}
}

void copy()
{
	buffer =  *first;
}

void delet()
{
	if(*first == s.back())
	{
		current = first;
		--first;
		s.erase(current);
	}
	else
	{
		current = first;
		++first;
		s.erase(current);
	}
}

void copy_delet()
{
	copy();
	delet();
}

void paste()
{
	if(buffer.size() != 0)
	{
		*first = *first + buffer;
	}
}

int main()
{
	int i, m;

	sd(n);
	for(i=0; i<n; i++)
	{
		fflush(stdin);
		getline(cin, ss);
		fflush(stdin);
		s.push_back(ss);
	}
	move_from_first(n);

	sd(num_com);
	fflush(stdin);

	for(i=0; i<num_com; i++)
	{
		fflush(stdin);
		getline(cin, com);
		fflush(stdin);

		if(com[0] == 'd')
		{
			delet();
		}
		else if(com[0] == ':')
		{
			m = ((int)com[1] - 48);
			move_from_first(m);
		}
		else if(com[0] == 'i')
		{
			insrt((int)com[2] - 48);
		}
		else if(com[0] == 'y')
		{
			copy();
		}
		else if(com[0] == 'p')
		{
			paste();
		}
		else if(com[1] == 'y')
		{
			copy_delet();
		}
	}
	cout << "\nFinal text in editor :\n";
	print_s();
	return 0;
}

/*
2
Nikunj
Khokhar
6
dd
dd
i 2
Yes
NO
:1
dd
i 2
No WAY
BETTER OPTIOn


NONo WAY
BETTER OPTIOn
*/

/*
	print_s();
	cout << "end : " << s.back() << "..\n";
	cout << "current  cursor  : " << *(first) << "..\n";

	delet();
	print_s();
	cout << "end : " << s.back() << "..\n";
	cout << "current  cursor  : " << *(first) << "..\n";

	move_from_first(2);
	delet();
	print_s();
	cout << "end : " << s.back() << "..\n";
	cout << "current  cursor  : " << *(first) << "..\n";
*/