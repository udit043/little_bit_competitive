// wrong incomplete
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sc(x) scanf(" %c", &x)
#define MAX 10000000
#define MOD 1000000007

bool v[MAX];
ll len, sp[MAX];

void Sieve(){
	for (ll i = 2; i < MAX; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (ll i = 3; i < MAX; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (ll j = i; (j*i) < MAX; j += 2){
				if (!v[j*i])	v[j*i] = true, sp[j*i] = i;
			}
		}
	}
}

int main()
{
	Sieve();
	ll t;
	sll(t);
	while(t--)
	{
		ll num;
		sll(num);
		printf("%lld\n", sp[num] );
	}
	return 0;
}