#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n; int l,i,z=0,o=0;
		cin >> n;
		l=n.length();
		
		for(i=0 ; i < l ; i++)
		{
			if(n[i] == '0')
				z=z+1;
			else
				o=o+1;
		}

//		cout << z << " " << o <<endl;

		if ( ( l - z == 1 ) || ( l - o == 1) )
			printf("Yes\n");
		else
			printf("No\n");

	}
	return 0;
}