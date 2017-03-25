t = input()
while(t > 0):
	reverse = 0
	t -= 1
	n = input()
	while(n != 0):
		reverse = reverse*10 + n%10
		n /= 10
	print reverse