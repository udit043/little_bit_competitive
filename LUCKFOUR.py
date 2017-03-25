t = input()
while(t > 0):
	t -= 1
	c = 0
	s = raw_input()
	for i in range(0, len(s)):
		if(s[i] == '4'):
			c += 1
	print c

'''
t = input()
while(t > 0):
	t -= 1
	n = input()
	c = 0
	while(n != 0):
		num = n % 10
		n = n / 10
		if (num == 4):
			c += 1
	print c
'''