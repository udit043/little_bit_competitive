t = input()
while(t > 0):
	t -= 1
	a = raw_input()
	b = raw_input()
	l1 = len(a)
	l2 = len(b)

	if(l1>l2):
		for y in range (l2):
			p=a.find(b[y])
			if(p != -1):
				print 'Yes'
				y=l2+1
				break
		if(y+1==l2):
			print 'No'
		
	else:
		for y in range (l1):
			p=b.find(a[y])
			if(p != -1):
				print 'Yes'
				y=l1+1
				break
		if(y+1==l1):
			print 'No'
		