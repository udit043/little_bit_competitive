#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i,n;	int b,sum;
		cin >> n;
		int a[n];

		for(i=0; i<n; i++)
		{
			int d=0,one=0,two=0,three=0,four=0,five=0,six=0;
			cin >> b;
			int c[b];

			for(int y=0; y<b; y++)
			{
				cin >> c[y];

				if (c[y]==1)
				{
					one+=1;
				}
				if (c[y]==2)
				{
					two+=1;
				}
				if (c[y]==3)
				{
					three+=1;
				}
				if (c[y]==4)
				{
					four+=1;
				}
				if (c[y]==5)
				{
					five+=1;
				}
				if (c[y]==6)
				{
					six+=1;
				}
			}
			sum=b;

			int num[6];
			num[0]=one;
			num[1]=two;
			num[2]=three;
			num[3]=four;
			num[4]=five;
			num[5]=six;

			std::sort(num,num+6);

			for(int z=0 ; z < num[0] ; z++ )
			{
				sum = sum + 4;
				num[1]=num[1]-1;
				num[2]=num[2]-1;
				num[3]=num[3]-1;
				num[4]=num[4]-1;
				num[5]=num[5]-1;
			}
			for(int z=0 ; z < num[1] ; z++ )
			{
				sum = sum + 2;
				num[2]=num[2]-1;
				num[3]=num[3]-1;
				num[4]=num[4]-1;
				num[5]=num[5]-1;
			}
			for(int z=0 ; z < num[2] ; z++ )
			{
				sum = sum + 1;
				num[3]=num[3]-1;
				num[4]=num[4]-1;
				num[5]=num[5]-1;
			}

			/*if ( (one+two+three+four+five+six) == 4 )
				sum=sum+1;
			if ( (one+two+three+four+five+six) == 5 )
				sum=sum+2;
			if ( (one+two+three+four+five+six) == 6 )
				sum=sum+4;*/

			a[i]=sum;
		}

		int great = a[0];
		int in=1;

		for(i=1; i<n; i++)
		{
			if (great < a[i])
			{
				great = a[i];
				in=i+1;
			}

			else if(great == a[i])
			{
				in=-2;
			}
		}

		if(in==1)
			cout << "chef\n";
		else if(in== -2)
			cout << "tie\n";
		else
			cout <<in<<"\n"; 
	}
	return 0;
}
/*
3
2
6 1 2 3 4 5 6
9 3 3 3 4 4 4 5 5 5
2
5 2 3 4 5 6
7 1 1 2 2 3 3 4
3
4 1 1 2 3
4 1 2 2 3
4 1 2 3 3
*/