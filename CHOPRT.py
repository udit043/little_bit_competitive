t = input()
while(t > 0):
	t -= 1
	a,b = map(int,raw_input().split())
	if(a < b):
		print '<'
	elif(a > b):
		print '>'
	else:
		print '='