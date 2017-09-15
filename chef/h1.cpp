#include <bits/stdc++.h>
using namespace std;

int score(string s) 
{
    string a = s;
    int ans=0;
    int aa,bb,cc,dd,ee,ff,gg,hh,ii,jj,kk,ll,mm,nn,oo,pp,qq,rr,ss,tt,uu,vv,ww,xx,yy,zz;

    aa=bb=cc=dd=ee=ff=gg=hh=ii=jj=kk=ll=mm=nn=oo=pp=qq=rr=ss=tt=uu=vv=ww=xx=yy=zz=0;

    for(int i=0; i< a.length(); i++)
    {
        if((a[i] == 'a') && (aa==0))
        {
            ans = ans + 1;
            aa = 1;
        }
        else if((a[i] == 'b') && (bb==0))
        {
            ans = ans + 2;
            bb = 1;
        }
        else if((a[i] == 'c') && (cc==0))
        {
            ans = ans + 2;
            cc = 1;
        }
        else if((a[i] == 'd') && (dd==0))
        {
            ans = ans + 2;
            dd = 1;
        }
        else if((a[i] == 'e') && (ee==0))
        {
            ans = ans + 1;
            ee = 1;
        }
        else if((a[i] == 'f') && (ff==0))
        {
            ans = ans + 2;
            ff = 1;
        }
        else if((a[i] == 'g') && (gg==0))
        {
            ans = ans + 2;
            gg = 1;
        }
        else if((a[i] == 'h') && (hh==0))
        {
            ans = ans + 2;
            hh = 1;
        }
        else if((a[i] == 'i') && (ii==0))
        {
            ans = ans + 1;
            ii = 1;
        }
        else if((a[i] == 'j') && (jj==0))
        {
            ans = ans + 2;
            jj = 1;
        }
        else if((a[i] == 'k') && (kk==0))
        {
            ans = ans + 2;
            kk = 1;
        }
        else if((a[i] == 'l') && (ll==0))
        {
            ans = ans + 2;
            ll = 1;
        }
        else if((a[i] == 'm') && (mm==0))
        {
            ans = ans + 2;
            mm = 1;
        }
        else if((a[i] == 'n') && (nn==0))
        {
            ans = ans + 2;
            nn = 1;
        }
        else if((a[i] == 'o') && (oo==0))
        {
            ans = ans + 1;
            oo = 1;
        }
        else if((a[i] == 'p') && (pp==0))
        {
            ans = ans + 2;
            pp = 1;
        }
        else if((a[i] == 'q') && (qq==0))
        {
            ans = ans + 2;
            qq = 1;
        }
        else if((a[i] == 'r') && (rr==0))
        {
            ans = ans + 2;
            rr = 1;
        }
        else if((a[i] == 's') && (ss==0))
        {
            ans = ans + 2;
            ss = 1;
        }
        else if((a[i] == 't') && (tt==0))
        {
            ans = ans + 2;
            tt = 1;
        }
        else if((a[i] == 'u') && (uu==0))
        {
            ans = ans + 1;
            uu = 1;
        }
        else if((a[i] == 'v') && (vv==0))
        {
            ans = ans + 2;
            vv = 1;
        }
        else if((a[i] == 'w') && (ww==0))
        {
            ans = ans + 2;
            ww = 1;
        }
        else if((a[i] == 'x') && (xx==0))
        {
            ans = ans + 2;
            xx = 1;
        }
        else if((a[i] == 'y') && (yy==0))
        {
            ans = ans + 2;
            yy = 1;
        }
        else if((a[i] == 'z') && (zz==0))
        {
            ans = ans + 2;
            zz = 1;
        }

    }
    return ans;

}

int main()
{
	string a;
	cin >> a;
	cout << score(a) << "\n";
	return 0;
}