#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,temp;
	getline(cin, s);
 
	istringstream iss(s);
	while(iss>>temp)
	{
		reverse(temp.begin(),temp.end());
		cout<<temp<<" ";
	}
	cout << "\n";
	return 0;
}

/*int main()
{
	unsigned num,number,rem,cube;
	num=number=rem=cube=0;
	cin >> num;
	number = num;
	while(num/10)
	{
		rem = num % 10;
		cube = cube + rem*rem*rem;
		num = num/10;
	}
	rem = num % 10;
	cube = cube + rem*rem*rem;
	if(cube == number)
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}*/