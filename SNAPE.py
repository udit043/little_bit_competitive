import math
t = input()
while(t > 0):
	t -= 1
	inp = map(int,raw_input().split())
	rs = math.sqrt( (max(inp[0],inp[1])*max(inp[0],inp[1])) - (min(inp[0],inp[1])*min(inp[0],inp[1])) )
	if isinstance(rs, float):
		print rs,
	else:
		print rs + '.0',

	rs = math.sqrt(inp[0]*inp[0] + inp[1]*inp[1])
	if isinstance(rs, float):
		print rs
	else:
		print rs + '.0'