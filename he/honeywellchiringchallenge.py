t = input()
while(t > 0):
	t -= 1
	mxc=1;mxr=1;
	n,m = map(int,raw_input().split())
	matrix = [[0 for x in range(m)] for y in range(n)] 
	j=0
	for i in range (0,n):
		matrix[i][j] = map(int,raw_input().split())
		j =+ 1

	for i in range (0,n):
		c=1
		for j in range (0,m):
			#matrix[i][j] = map(int,raw_input().split())
			if(j>0):
				if(matrix[i][j-1] == matrix[i][j]):
					c += 1
				else:
					c = 1
				mxr = max(mxr, c)

	for j in range (0,m):
		c=1
		for i in range (0,n):
			if(i>0):
				if(matrix[i-1][j] == matrix[i][j]):
					c += 1
				else:
					c=1
				mxc = max(mxc, c)

	print mxr*mxc