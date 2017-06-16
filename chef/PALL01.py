t = input()
while(t > 0):
	reverse = 0
	t -= 1
	n = input()
	num = n
	while(n != 0):
		reverse = reverse*10 + n%10
		n /= 10
	if(num == reverse):
		print 'wins'
	else:
		print 'losses'