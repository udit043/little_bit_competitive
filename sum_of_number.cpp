#include <iostream>
#include <algorithm>
 
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		long long n, k;
        cin >> n;
        
        long long a[n];

        for(int i = 0; i < n; i++) 
        	cin >> a[i];
 
 		cin >> k;

 		if( k = 0 )
 			cout << "YES\n";

 		else
 		{
        	sort(a, a + n);

        	for(int i = 0; i < n; i++) 
        		cout << a[i] << " ";
 
        	for(int i = 0; i < n; i++)
        	{
                int t = lower_bound(a, a + n, k - a[i]) - a - 1;
                cout << t << "\n";
        	}
        }
    }
    return 0;
}

/*#include <iostream>
#include <algorithm>

using namespace std;

long long n,k,a[20];

int main()
{
	int t,n,y;

	cin >> t;
	
	while(t--)
	{
		cin >> n;
		
		for(int i=0; i<n; i++)
			cin >> a[i];
			
		cin >> k;
			
		if(k == 0)
			cout << "YES\n";
		
		else
		{
			std::sort(a,a+n);

			for(int i=0; i<n; i++)
			{
				cout << "i ";
				y = lower_bound (a, a+n, k-a[i]);
				cout << y << '\n';
			}
		}
	}

    return 0;
}
*/