#include <bits/stdc++.h>
//#define int long long 
using namespace std;

const int maxn = 1e3 + 17, inf = 1e6 + 1;
int n, a[maxn][maxn];
void solve(){
	cin >> n;
	int cur = 1;
	for(int i = 0; i < 2 * n; i++)
		for(int j = 0; j <= min(n - 1, i); j++)
			if(i - j < n)
				a[i - j][j] = cur++;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cout << a[j][i] << " \n"[j == n - 1];
}

int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}

/*
1
4

1 2 4 7
3 5 8 11
6 9 12 14
10 13 15 16

*/