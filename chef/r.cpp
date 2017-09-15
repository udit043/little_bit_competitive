#include <iostream>
using namespace std;

int main()
{
    int n,d=0;
    cin >> n;
    while(n--)
    {
    	int a,b,c;
    	cin >> a >> b >> c;
    	
    	int x;
    	
    	x = b*b + (-4)*a*c ;

    	if(x >= -1)
    	   d+=1;
    }

    cout << d << "\n";
    return 0;
}
