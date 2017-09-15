#include <iostream>
using namespace std;

int main()
{
	int r;
	cin >> r;
	while(r--)
	{
		bool valid;
		int l, dot=0, head=0, tail=0;
		cin >> l;

		if(l == 0)
			valid=true;
		else
		{
			string s;
			cin >> s;
			for(int i=0; i<l; ++i)
			{
				if(s[i] == 'H')
				{
					++head;
					if(head-tail == 1)
						valid=true;
					else
					{
						valid=false;
						break;
					}
				}
				else if(s[i]== 'T')
				{
					++tail;
					if(head-tail == 0)
						valid=true;
					else
					{
						valid=false;
						break;
					}
				}
				else
				{
					//
				}
			}
		}

		if( (valid) && (head-tail == 0) )
			cout << "Valid\n";
		else
			cout << "Invalid\n";
	}
	return 0;
}

/*
7
18
..H..T...HTH....T.
3
...
0
10
H..H..T..T
2
HT
11
.T...H..H.T
7
H..T..H


Valid
Valid
Valid
Invalid
Valid
Invalid
Invalid
*/