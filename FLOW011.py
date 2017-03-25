# http://stackoverflow.com/questions/4626338/python-float-formatting-like-g-but-with-more-digits
t = input()
while(t > 0):
	t -= 1
	s = input()
	if(s < 1500):
		print s*2
	else:
		print '%g' %(float(s*1.98)+500) 