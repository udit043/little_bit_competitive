# wrong pata nhi kaise
def gc(a, b):
	while b:
		a, b = b, a%b
	return a

t = input()
while(t > 0):
	t -= 1
	a,b = map(int,raw_input().split())
	print int(gc(a,b)),
	print int( (a*b) / gc(a,b))