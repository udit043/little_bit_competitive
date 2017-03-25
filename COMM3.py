import math
t = input()
while(t > 0):
	f = 0
	t -= 1
	r = input()
	a0,b0 = map(int,raw_input().split())
	a1,b1 = map(int,raw_input().split())
	a2,b2 = map(int,raw_input().split())

	d0 = math.sqrt(	pow(abs(a0-a1), 2) + pow(abs(b0-b1), 2)	);
	d1 = math.sqrt(	pow(abs(a1-a2), 2) + pow(abs(b1-b2), 2)	);
	d2 = math.sqrt(	pow(abs(a0-a2), 2) + pow(abs(b0-b2), 2)	);

	if( d0 <= r):
		f += 1;
	if( d1 <= r):
		f += 1;
	if( d2 <= r):
		f += 1;

	if( f > 1 ):
		print 'yes'
	else:
		print 'no'
'''
3
1
0 1
0 0
1 0
2
0 1
0 0
1 0
2
0 0
0 2
2 1

'''