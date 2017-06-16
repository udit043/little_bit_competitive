#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,j,n,m,f,p,flag;
	string s;

	// n - special friends    m - post
	// f - identifier         p - popularity      s - string of lower upper

	cin >> n >> m;
	long long int a[n];
	
	for(i=0; i<n; i++)
		cin >> a[i];

	map<int,string> mapsf;  // map of special friends
	map<int,string> mapor;  // map of ordinary friends

	for(i=0; i<m; i++)
	{
		flag = 0;
		cin >> f;
		for(j=0; j<n; j++)
		{
			if(f == a[j])   // special friends
			{
				cin >> p >> s;
				mapsf.insert( pair <int, string> (p,s));   // OR mapsf[p] = s;
				flag = 1;
				break;
			}
		}
		if( flag == 0 )    // ordinary friends
		{
			cin >> p >> s;
			mapor.insert( pair <int, string> (p,s));       // OR mapor[p] = s;
		}
	}

	std::map<int, string>::reverse_iterator rit;

	for (rit=mapsf.rbegin(); rit!=mapsf.rend(); ++rit)           //  for(i=mapsf.size(); i>0; i--)
		cout << rit->second << "\n";     						 //  cout << rit->first << " => " << rit->second << "\n";

	for (rit=mapor.rbegin(); rit!=mapor.rend(); ++rit) 
		cout << rit->second << "\n";     						 //  cout << rit->first << " => " << rit->second << "\n";

	return 0;
}

/*
2 4
1 2
1 1 WhoDoesntLoveChefBook
2 2 WinterIsComing
3 10 TheseViolentDelightsHaveViolentEnds
4 3 ComeAtTheKingBestNotMiss

*/