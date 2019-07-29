#include <bits/stdc++.h>
using namespace std;

#define mx 100007
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d \n", x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld \n", x)

vector <int> s1, s2, intersect;
vector <int>::iterator it;

int main()
{
	int t, n, m, i, j;
	sd(t);
	while(t--)
	{
		sd(n);	sd(m);
		for(i=0; i<n; i++)
		{
			sd(j);
			s1.push_back(j);
		}
/*		for (it=s1.begin(); it!=s1.end(); ++it)
			cout << ' ' << *it;
		cout << "end...\n";
*/		
		for(i=0; i<m; i++)
		{
			sd(j);
			s2.push_back(j);
		}
/*		for (it=s2.begin(); it!=s2.end(); ++it)
			cout << ' ' << *it;
		cout << "end...\n";
*/		
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());

		set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(intersect));

		cout << "\nThe intersection has " << (intersect.size()) << " elements:\n";
/*		for (it=intersect.begin(); it!=intersect.end(); ++it)
			cout << ' ' << *it;
*/		
		s1.clear();
		s2.clear();
		intersect.clear();
	}
	return 0;
}

/*
2
3 4
1 2 3
3 4 5 6
3 3
1 2 3
4 5 6

1
0
*/