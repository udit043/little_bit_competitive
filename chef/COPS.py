t = input()
while(t > 0):
	t -= 1
	rang=0;res=0;left=0;right=0;num=[]

	m,x,y = map(int,raw_input().split())
	a = map(int,raw_input().split())
	a.sort()
	rang = x*y

	for i in range(101):
		num.append(0)

	for i in range(m):
		left = a[i] - rang
		right = a[i] + rang

		if(left <= 1):
			left = 1
		if(right >= 100):
			right = 100

		for j in range(left,right+1):
			num[j] = 1

	for i in range(101):
		res += num[i]
	print 100-res


'''
3
4 7 8
12 52 56 8
2 10 2
21 75
2 5 8
10 51

'''

'''
while(t--)
	{
		int m,x,y,i,j,range,res=0,left,right;
		cin >> m >> x >> y;
		range = x*y;

		int a[m],num[101];
		memset(num,0,sizeof num);

		for(i=0; i<m; i++)
		{
			cin >> a[i];
		}
		sort(a,a+m);

		for(i=0; i<m; i++)
		{
			left  = a[i] - range;
			right = a[i] + range;

			if(left <= 1)
				left = 1;
			if(right >= 100)
				right = 100;

			fill_n(num+left,right-left+1,1);
		}

		for(i=1; i<101; i++)
			res += num[i];

		cout << 100-res << "\n";
	}
'''