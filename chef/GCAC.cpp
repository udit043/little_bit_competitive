#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		vector <pair <long long, long long> > company;
		long long n,m,i,j,max_salary_offered, count_students=0, total_money=0, not_hired=0; string str;
		cin >> n >> m;

		long long minsalary[n], offeredSalary[m], maxJobOffers[m], qual[n][m], flag_join[n];
		memset(flag_join, 0 , sizeof(flag_join));
		for(i=0; i<n; ++i)
			cin >> minsalary[i];

		for(i=0; i<m; ++i)
		{
			cin >> offeredSalary[i] >> maxJobOffers[i];
			company.push_back (make_pair(offeredSalary[i], maxJobOffers[i]));
		}

		for(i=0; i<n; ++i)
		{
			cin >> str;
			for(j=0; j<m; ++j)
			{
				if(str[j] == '0')
					qual[i][j] = 0;
				else
					qual[i][j] = 1;
			}
		}

		for(i=0; i<n; ++i)
		{
			max_salary_offered = 0;
			for(j=0; j<m; ++j)
			{
				if(qual[i][j] == 1)
				{
					if(company[j].second >= 1)
						max_salary_offered = max(max_salary_offered, company[j].first);
				}
			}
			if(minsalary[i] <= max_salary_offered)
			{
				flag_join[i] = 1;
				for(j=0; j<m; ++j)
				{
					if((company[j].first == max_salary_offered) && (company[j].second >= 1) )
					{
						company[j].second -= 1;
					}
				}
			}
		}

		for(i=0; i<n; ++i)
		{
			if(flag_join[i] == 1)
				++count_students;
		}
		for(j=0; j<m; ++j)
		{
			if(company[j].second != maxJobOffers[j])
			{
				total_money += ( (maxJobOffers[j]-company[j].second) * (company[j].first) );
			}
			else
				++not_hired;
		}

		cout << count_students << " " << total_money << " " << not_hired << "\n";
	}
	return 0;
}

/*
1
5 6
5000 10000 3000 20 100
10000 2
800 2
600 1
10 8
1000 9
2000 10
111111
100000
000000
000001
100100

3 22000 4
*/