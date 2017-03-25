#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

static long int get_i()
{
	char c=getchar_unlocked();
	while(c<'0'||c>'9')
	c=getchar_unlocked();
	long int ret=0;
	while(c>='0'&&c<='9')
	{
		ret=ret*10+c-'0';
		c=getchar_unlocked();
	}
	return ret;
}

int main()
{
	vector<ull> v;
	ull n,l,r,i,j,k,res=0,flag=0,num1,num2,flag1=0,flag2=0;
	n=get_i();l=get_i();r=get_i();
	ull a[n];
	for(i=0; i<n; i++)
	{
		a[i]=get_i();
	}
	sort(a, a+n);
	for(i=l; i<=r; i++)
	{
		for(j=0; j<n; j++)
		{
			if(flag2 == 1)
			{
				if(num2 == a[j])
					continue;
			}
			for(k=j+1; k<n; k++)
			{
				if(flag1 == 1)
				{
					if(num1 == a[k])
						continue;
				}
				if( (i+a[j]>a[k]) && (i+a[k]>a[j]) && (a[j]+a[k]>i) )
				{
					res++;
					flag=1;
					flag1=0;
					break;
				}
				else
				{
					flag1=1;
					num1=a[k];
				}
			}
			if(flag == 1)
			{
				flag2=0;
				flag=0;
				break;
			}
			else
			{
				flag2=1;
				num2=a[j];
			}
		}
	}
	printf("%llu\n", res);
	return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define li long long

static long int get_i()
{
	char c=getchar();
	while(c<'0'||c>'9')
	c=getchar();
	long int ret=0;
	while(c>='0'&&c<='9')
	{
		ret=ret*10+c-'0';
		c=getchar();
	}
	return ret;
}

int main()
{
	ll n,l,r,len,res=0;
	li i,j,k,flag=0,t=0;
	n = get_i();l = get_i();r = get_i(); //cin >> n >> l >> r;
	ll a[n];
	for(i=0; i<n; i++)
		a[i] = get_i(); //cin >> a[i];
	//sort(a, a+n);
	len = sizeof(a) / sizeof(a[0]);
	set<ll> s(a,a+len);
	set<ll>::iterator it;
	len = s.size();
	ll b[len];
	for(i=0,it=s.begin(); it!=s.end(); ++it,++i)
		b[i] = *it;

//	for(i=0; i<len; i++)
//		cout << b[i] << " ";

	for(i=l; i<=r; i++)
	{
		for(j=0; j<len; j++)
		{
			for(k=j+1; k<len; k++)
			{
				if( ((i+b[j])>b[k]) && ((i+b[k])>b[j]) && ((b[j]+b[k])>i) )
				{
					res++;
					flag=1;
					cout << "i hai " << i << "\n";
					break;
				}
			}
			if(flag == 1)
			{
				flag=0;
				break;
			}
		}
	}
	cout << res << " " << n-len << "\n";
	return 0;
}*/