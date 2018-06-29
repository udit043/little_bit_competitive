#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MAX 1000007
#define INF 1000000000000000LL
#define MOD 1000000007
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define pb(x) push_back(x)
#define all(a,n) for(long long i = a; i < n; ++i)
#define dd double
#define PI 3.14159265358979323846


ll n,t;
string s;
int A[50];
bool isChar(int k)
{
	if(k >= 65 and k <= 90)
		return true;
	return false;
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>t;
	while(t--)
	{
		memset(A, 0, sizeof A);
		cin>>s;
		n = s.length();
		for(int  i=0; i < n; ++i)
			++A[s[i]-'0'];
		set<int> st;
		for(int i =0; i < 10; ++i)
		{
			for(int j =0; j < 10; ++j)
			{
				if(A[i] > 0 and A[j] > 0)
				{
					if(i == j and A[j] > 1)
					{
						int num = 10*i + j;
						if(isChar(num))
							st.insert(num);
					}
					else if(i != j)
					{
						int num = 10*i + j;
						if(isChar(num))
							st.insert(num);	
					}

				}
			}
		}
		if(st.size() == 0)
			cout<<endl;
		else
		{
			for(auto it = st.begin(); it != st.end(); ++it)
			{
				int num = *it;
				cout<<(char)num;
			}
			cout<<endl;
		}
	}
	


	return 0;
}