#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,e,i,o,u;
    a=e=i=o=u=0;
    cin >> n;
    string s;
    cin >> s;
    for(int j=0; j<n; ++j)
    {
        if(s[j] == 'a')
            a = 1;
        else if(s[j] == 'e')
            e = 1;
        else if(s[j] == 'i')
            i = 1;
        else if(s[j] == 'o')
            o = 1;
        else if(s[j] == 'u')
            u = 1;
    }
    if(a == e && e == i && i == o && o == u && u != 0 )
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

/*
8
atuongih

*/