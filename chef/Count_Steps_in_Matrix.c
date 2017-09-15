#include <stdio.h>
#include <math.h>
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

static void put_i(long int n)
{
	#define BSIZE 6
	char buf[BSIZE];
	int bn=BSIZE-1;
	while(1)
	{
		buf[bn--]='0'+(n%10);
		n=n/10;
		if(n==0)break;
	}
	while(bn<BSIZE-1)
	putchar(buf[++bn]);
	putchar('\n');
}


struct pos
{
	int Num;
	int row;
	int col;
}pos[250000];


int main(int argc, char** argv) 
{
	int calcrow,calccol,i,j,k,l,count;
	//cin>>l;
	l=get_i();
	while(l-->0)
	{
		count=0;
		calcrow=0;
		calccol=0;
		k=get_i();
		int a[k][k];
		for(i=0;i<k;i++)
		{
			for(j=0;j<k;j++)
			{
				a[i][j]=get_i();
				pos[a[i][j]].Num=a[i][j];
				pos[a[i][j]].row=i+1;
				pos[a[i][j]].col=j+1;
			}
		}

		for(i=1;i<k*k;i++)
		{
          (calcrow=(pos[i+1].row)-(pos[i].row));
			{
				if(signbit(calcrow))
				{calcrow*=-1;}
				count=count+calcrow;
				(calccol=(pos[i+1].col)-(pos[i].col));
				if(signbit(calccol))
				{calccol*=-1;}
				count=count+calccol;
			}
      }
		put_i(count);
   	}
	return 0;
}
