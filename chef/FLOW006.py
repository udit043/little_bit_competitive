t = input()
while(t > 0):
	t -= 1
	sum=0
	num = input()
	while(num != 0):
		sum = sum + num%10;
		num = num/10;
	print sum