// wrong incomplete
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define sc(x) scanf(" %c", &x)
#define MAX 1000007
#define MOD 1000000007

ll result[1000] = {0};
ll fact_dp(int n)
{
    if (n >= 0) 
    {
        result[0] = 1;
        for (int i = 1; i <= n; ++i) 
        {
            result[i] = i * result[i - 1];
        }
        return result[n];
    }
}

int main()
{
    string s;
    cin >> s;
    ll a=0, b=0, c=0,i,ans=0;
    for(i=0; i<s.length(); ++i)
    {
        if(s[i] == 'a')
            ++a;
        else if(s[i] == 'b')
            ++b;
        else
            ++c;
    }
    for(i=0; i<s.length(); ++i)
    {
        if(s[i] == 'a')
        {
            --a;
            cout << fact_dp(b+c) << " " << fact_dp(b) << " " << fact_dp(c) << "\n";
            ans = ans + fact_dp(b+c)/fact_dp(b)*fact_dp(c);
        }
        else if(s[i] == 'b')
            --b;
        else
            --c;
    }
    printf("%lld\n", ans);
    return 0;
}

/*
void func(const string& s1, ll characterpos, char chr, ll& cnt1)
{
    if (s1.size() == characterpos)
    {
        if (chr == 'c')
        {
            ++cnt1;
        }
        
        return;
    }
    if (s1[characterpos] == chr)
    {
        func(s1, characterpos + 1, chr, cnt1);
    }
    else if (s1[characterpos] == chr + 1)
    {
        func(s1, characterpos + 1, chr + 1, cnt1);
    }
    func(s1, characterpos + 1, chr, cnt1);
}

ll perm(const string& s0)
{
    ll cnt = 0;
    func(s0, 0, 'a' - 1, cnt);
    return cnt;
}

int main()
{
    string s;
    cin >> s;
    ll ans = perm(s);
    printf("%lld\n", ans);
    return 0;
}
*/