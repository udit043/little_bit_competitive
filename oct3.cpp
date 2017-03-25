#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

long long int query(long long int x) //taken from hacker earth
{
	x=x+1;
	long long int p=0;
	for(; x > 0; x -= x&-x)
	{
		p+=1;
	}
	return p;
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		string s1,s2,s3,s4;
		int n;

		cin >> s1 >> s2 >> s3 >> n;

		s4 = s1;
		for(int i=0; i<n; i++)
			s4=s4+s2;
		s4=s4+s3;

		long long int i_bin = std::stoul (s4,nullptr,2); //binary to decimal
		long long int y = query(i_bin) ;
		cout << y << "\n";
	}
	return 0;
}



/*

#define toInt(x) {atol(x.c_str())};
unsigned long long binary_to_decimal(unsigned long long num)
{
    unsigned long long res = 0;

    for( long long int i = 0; num > 0; ++i)
    {
        if((num % 10) == 1)
            res += (1 << i);

        num /= 10;
    }

    return res;
}
		cout << query(127) << "\n";
		cout << query(51491) << "\n"; //ide 6
		cout << query(290540) << "\n";//ide 12
		cout << query(332365) << "\n";//ide 8
		cout << query(88936) << "\n";//ide 10

		long long int i_bin = toInt(s4);  //std::stoi (s4,nullptr,2);
		//cout << s4 << ": " << i_bin << '\n';
		long long int x = binary_to_decimal(i_bin);
		//cout << x << "\n";
		long long int y = query(x) ;
		cout << y << "\n";
*/