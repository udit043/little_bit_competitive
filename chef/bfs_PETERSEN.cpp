#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> v1[10];

	v1[0].push_back(1);
	v1[1].push_back(0);
	v1[0].push_back(5);
	v1[5].push_back(0);

	v1[1].push_back(2);
	v1[2].push_back(1);
	v1[1].push_back(6);
	v1[6].push_back(1);

	v1[2].push_back(3);
	v1[3].push_back(2);
	v1[2].push_back(7);
	v1[7].push_back(2);
	
	v1[3].push_back(4);
	v1[4].push_back(3);
	v1[3].push_back(8);
	v1[8].push_back(3);
	
	v1[4].push_back(0);
	v1[0].push_back(4);
	v1[4].push_back(9);
	v1[9].push_back(4);

	v1[5].push_back(8);
	v1[8].push_back(5);
	v1[5].push_back(7);
	v1[7].push_back(5);

	v1[6].push_back(9);
	v1[9].push_back(6);
	v1[6].push_back(8);
	v1[8].push_back(6);

	v1[7].push_back(9);
	v1[9].push_back(7);

	int t;
	cin >> t;
	while(t--)
	{
		string s,s1,s2,s3,s4;
		cin >> s;
		for(int i=0; i<s.length(); ++i)
		{
			if(s[i] == 'A')
			{
				s1 += '0';
				s2 += '5';
			}
			else if(s[i] == 'B')
			{
				s1 += '1';
				s2 += '6';
			}
			else if(s[i] == 'C')
			{
				s1 += '2';
				s2 += '7';
			}
			else if(s[i] == 'D')
			{
				s1 += '3';
				s2 += '8';
			}
			else if(s[i] == 'E')
			{
				s1 += '4';
				s2 += '9';
			}
		}

		for(int i=0; i<s.length()-1; ++i)
		{
			int f = 0;
			for(int j=0; j<v1[s1[i]].size(); ++j)
			{
				if(s1[i+1] == char(v1[s2[i]][j]))
				{
					f = 1;
					s3 += v1[s1[i]][j];
				}
			}
		}

		for(int i=0; i<s.length()-1; ++i)
		{
			int f = 0;
			for(int j=0; j<v1[s2[i]].size(); ++j)
			{
				if(s2[i+1] == char(v1[s2[i]][j]))
				{
					f = 1;
					s4 += v1[s2[i]][j];
				}
			}
		}
		cout << s3 << " " << s4 << "\n";
	}
	return 0;
}

/*
vector <int> v1[11];
bool vis1[11];
int level1[11];

int bfs1(int s)
{
	queue <int> q;
	q.push(s);
	vis1[s] = true;
	level1[s] = 0;

	while( !q.empty() )
	{
		int p = q.front();
		q.pop();

		for(int i=0; i<v1[p].size(); ++i)
		{
			if(vis1[ v1[p][i] ] == false)
			{
				q.push(v1[p][i]);
				level1[v1[p][i]] = level1[p] + 1;
				vis1[ v1[p][i] ] = true;
			}
		}
	}
}
*/