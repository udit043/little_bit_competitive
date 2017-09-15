#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		string a,b;
		int i,j,cnt;

		cin >> a >> b;

		vector <char> av( a.begin(), a.end() );
		vector <char> bv( b.begin(), b.end() );
		vector <char> ab, ba, abs, bas;

		sort(av.begin(), av.end());
		sort(bv.begin(), bv.end());

		set<char> as( av.begin(), av.end() );
		set<char> bs( bv.begin(), bv.end() );

		set_difference(as.begin(), as.end(), bs.begin(), bs.end(), inserter(abs, abs.end()));
		set_difference(bs.begin(), bs.end(), as.begin(), as.end(), inserter(bas, bas.end()));

		if(abs == bas)
		{
			cout << "B\n";
			//cout << "B : equal hai\n";
			goto okay;
		}

		if(abs.size() > 0)
		{
			for(i=0; i<abs.size(); ++i)
			{
				cnt = count (av.begin(), av.end(), abs[i]);
				if((cnt >= 2 )||( bas.size() == 0))
				{
					cout << "A\n";
					//cout << "A : sabse pehle wala loop \n";
					goto okay;
				}
			}
			cout << "B\n";
			//cout << "B : tukaa\n";
		}
		if(abs.size() == 0)
		{
			cout << "B\n";
			//cout << "B : set A ke saare elements set B mai hai\n";
		}

		okay:
		{

		}
	}
	return 0;
}

/*
3
ab
ab
aba
cde
ab
cd

B
A
B
*/
