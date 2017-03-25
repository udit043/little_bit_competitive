t = input()
div = [2048,1024,512,256,128,64,32,16,8,4,2,1]
while(t > 0):
	p = input()
	ans = 0
	i=0
	for i in div:
		ans = ans + (p/i)
		p = p%i
	print ans
	t = t - 1