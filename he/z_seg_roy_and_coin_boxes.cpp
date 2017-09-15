#include<bits/stdc++.h>
 
#define repi(n) for(int i=0;i<(n);++i)
#define repj(n) for(int j=0;j<(n);++j)
#define repr(i,m,n) for(int i=(m);i<=(n);++i)
#define rep1i(n) for(int i=1;i<=(n);++i)
#define sz(a) int((a).size)
#define pb(v) push_back(v)
#define mp(a,b)	make_pair((a),(b))
#define all(v) (v).begin(),(v).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i!=(c).end();++i)
#define pre(c,v) ((c).find()!=(c).end)
#define vpre(c,v) (find(all(c))!=(c).end())
#define nl cout<<endl
 
#define fi first
#define sec second
 
using namespace std;
 
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vii;
typedef vector<vl> vll;
typedef pair<int,int> ii;
 
vi lazy,cnt;
 
void updateRange(int node,int s,int e, int l, int r, int val)
{	
	if(s>e || s>r || e<l)
		return;
	if(s>=l && e<=r)
	{
		lazy[node] += val;
		return;
	}
	int mid = (s+e)/2;
	updateRange(node*2,s,mid,l,r,val);
	updateRange(node*2+1,mid+1,e,l,r,val);
}
 
void flat(int node,int s,int e)
{
	if(s!=e)
	{
		lazy[node*2] += lazy[node];
		lazy[node*2+1] += lazy[node];
		lazy[node] = 0;
		int mid = (s+e)/2;
		flat(node*2,s,mid);
		flat(node*2+1,mid+1,e);
	}
	else
	{
		cnt[lazy[node]]++;
//		cout << s << "-" << lazy[node]<< " ";
	}
}
 
int main()
{
	int n,m,q;
	scanf("%d%d",&n,&m);
	int size = pow(2,log2(n)+2);
	lazy.resize(size,0);
	cnt.resize(n+1,0);
	repi(m)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		updateRange(1,0,n-1,x-1,y-1,1);
	}
	flat(1,0,n-1);
	for(int i=cnt.size()-2;i>=0;--i)
	{
		cnt[i] += cnt[i+1];
	}
	
	scanf("%d",&q);
	repi(q)
	{
		int x;
		scanf("%d",&x);
		printf("%d\n",cnt[x]);
	}
	
  	return 0;
}