#include <bits/stdc++.h>
using namespace std;

long double dist(long double a, long double b) 
{
	return a*a + b*b;
}

int main ()
{
	long long int n, m, count, i, j, k, f, j1, line=0;
	cin >> n >> m;

	multimap <long double, long double> cord;
	multimap <long double, long double>::iterator it, iit, iiit;
	
	long double X, Y, key, x[n], y[n], x1[n], y1[n], dif[n-m+1], xx=0, yy=0, p, e, d, ans=99999;
	memset(x, 0, sizeof x);
	memset(y, 0, sizeof y);
	memset(dif, 0, sizeof dif);

	for(count=0; count<n; count++)
	{
		cin >> X >> Y;
		x[count] = X;
		y[count] = Y;

		key = X*X + Y*Y;
		cord.insert (pair<long double, long double> (key, count));
	}

	for(it=cord.begin(),i=0; (it!=cord.end()) && (i<n); ++it,++i)
	{
		x1[i] = x[(long long int)(*it).second];
		y1[i] = y[(long long int)(*it).second];
	}
	//cout << "x1 ke " << x1[0] << "\n";
	for(count=0; count<(n-m+1); count++)
	{
		for(j=count; j<(count+m); j++)
		{
			xx += x1[j]; yy += y1[j];
		}
		xx /= m; yy /= m;
		p = 0.1;
		//cout << "han " << xx << ",," << yy << "\n";
		for(i=0; i<30000; i++)
		{
			f = count;
			d = dist(xx - x1[count], yy - y1[count]);
			//cout << "x1 " << x1[0] << " :: x1[count] " << x1[count] << "\n";
			//cout << "d hai " << d << " :: count hai" << count << " :: " << (xx - x1[count]) << "\n";
			//cin >> ans;

			for (k = count; k < (count+m); k++) 
			{
				e = dist(xx - x1[k],yy - y1[k]);
				if (d < e) { d = e; f = k; }
			}

			xx += (x1[f] - xx)*p;
			yy += (y1[f] - yy)*p;
			p *= 0.999;
			//cout << "d hai " << d << "\n";
		}
		dif[count] = sqrt(d);
		ans = min(dif[count], ans);
		//cout << "Answer : " << xx << "," << yy << " :: " << dif[count] << "\n";
		xx = yy = 0;
	}
	cout << fixed << setprecision(6);
	cout << ans << "\n";	
	return 0;
}

/*for(it=cord.begin(),ans=0; it!=cord.end(); ++it, ++ans)
	{
    	//cout << "(" << x[(long long int)(*it).second] << "," << y[(long long int)(*it).second] << ")\n";
    	for(iit=it,j=0; (iit!=cord.end()) && (j<m); ++iit, ++j)
    	{
    		//	cout << x[(long long int)(*iit).second] << "," << y[(long long int)(*iit).second] << " .. ";
    		xx += x[(long long int)(*iit).second];
    		yy += y[(long long int)(*iit).second];
    	}
    	xx /= m; yy/= m;
    	p = 0.1

    	for(i = 0; i < 30000; i++)
    	{
    		f = 0;
    		dif[ans] = dist(xx - x[(long long int)(*it).second], yy - y[(long long int)(*it).second]);
    		
    		for(iiit=iit,k=1; (iiit!=cord.end()) && (k<m); ++iiit,++k)
    		{
    			e = dist(xx - x[(long long int)(*iiit).second], yy - y[(long long int)(*iiit).second]);
    			if (dif[ans] < e)
    			{
    				d[ans] = e; f = k;
    			}
    		}
    		xx += (x[])
    	}
    	//cout << "next\n";
	}*/


/*#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,m,i=0,count;
	cin >> n >> m;
	double a[n+n], dif[n-m+1], x, y, key, XX,YY;
	memset(a, 0, sizeof a);
	memset(dif, 0, sizeof dif);
	map <double, double> cord;

	for(count=1; count<=n; count++)
	{
		cin >> x >> y;
		a[i] = x;
		i++;
		a[i] = y;
		i++;
		key = x*x+y*y;
		cord[key] = count;
	}

	for(count=0; count<=n-m; count++)
	{
		for(j=0; j<m; j++)
		{
			diff[count] = cord
		}
	}
	return 0;
}*/