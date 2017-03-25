def fact(num):
	mul = 1
	for i in range(1,num+1):
		mul = mul * i
	return mul

t = input()
while(t > 0):
	t -= 1
	n = input()
	print fact(n)

'''
import math
 
t = input()
while(t > 0):
	t -= 1
	n = input()
	print math.factorial(n)
	#print fact(n) 
'''