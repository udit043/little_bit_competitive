#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int c=0;
		string s1,s2,s3,s4,s5,s6,s7,s8;
		cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8;

		if(s1 == s5)
			++c;
		else if(s1 == s6)
			++c;
		else if(s1 == s7)
			++c;
		else if(s1 == s8)
			++c;

		if(s2 == s5)
			++c;
		else if(s2 == s6)
			++c;
		else if(s2 == s7)
			++c;
		else if(s2 == s8)
			++c;

		if(s3 == s5)
			++c;
		else if(s3 == s6)
			++c;
		else if(s3 == s7)
			++c;
		else if(s3 == s8)
			++c;

		if(s4 == s5)
			++c;
		else if(s4 == s6)
			++c;
		else if(s4 == s7)
			++c;
		else if(s4 == s8)
			++c;

		if(c >= 2)
			cout << "similar\n";
		else
			cout << "dissimilar\n";
	}
	return 0;
}

/*
5
eggs sugar flour salt
sugar eggs milk flour
aa ab ac ad
ac ad ae af
cookies sugar grass lemon
lemon meat chili wood
one two three four
one two three four
gibberish jibberish lalalalala popopopopo
jibberisz gibberisz popopopopu lalalalalu

*/