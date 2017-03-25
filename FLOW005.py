t = input()
div = [100,50,10,5,2,1]
while(t > 0):
	p = input()
	ans = 0
	i=0
	for i in div:
		ans = ans + (p/i)
		p = p%i
	print ans
	t = t - 1