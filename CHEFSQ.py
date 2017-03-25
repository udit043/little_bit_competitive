t = input()
while(t > 0):
	t -= 1
	n = input()
	a = map(int,raw_input().split())
	f = input()
	b = map(int,raw_input().split())

	i=0;j=0
	while(i<f):
		while((j<n) & (i<f)):
			if(b[i] == a[j]):
				i += 1
			j += 1
		break
	if(i == f):
		print 'Yes'
	else:
		print 'No'

'''
	while(i<f):
		print 'i is',; print i

		while(j<n):
			print 'j is',; print j; print 'i is',; print i
			if(b[i] == a[j]):
				print 'andar'
				i += 1
			j += 1
		break
	if(i == f):
		print 'Yes'
	else:
		print 'No'
'''


'''
	for i in range(0,f):
		for j in range(0,n):
			if(b[i] == a[j]):
				i += 1
		break
	if(i == f):
		print 'Yes'
	else:
		print 'No'
'''