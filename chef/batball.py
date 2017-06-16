TSORT:

t = int(raw_input())
numbers = []
for i in range(0,t):
	num = int(raw_input())
	numbers.append(num)
numbers.sort()
for i in numbers:
	print "%d" % i

'''t = input()
numbers = []
for i in range(0,t):
	num = input()
	numbers.append(num)
numbers.sort()
i=0
for i in range(0,t):
	print numbers[i]'''

////////////////////////////////////////////////////////////////////
MUFFINS3:

t = input()
while(t > 0):
	n = input()
	print n/2+1
	t -= 1

////////////////////////////////////////////////////////////////////
CIELRCPT:

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

////////////////////////////////////////////////////////////////////
PERMUT:

test = 1
while(test):
	t = int(input())
	if(t == 0):
		test = 0
		break
	flag = 0
	elements = map(int,raw_input().split())
#	elements = []
#	for i in range(0,t):
#		number = input()
#		elements.append(number)
	for i in range(0,t):
		if(i+1 != elements[elements[i]-1]):
			flag = 1
			break;
	if (flag == 1):
		print 'not ambiguous'
	else:
		print 'ambiguous'

////////////////////////////////////////////////////////////////////
FLOW001:

t = input()
for i in range(0,t):
	print sum(map(int,raw_input().split()))
#while(t>0):
#	print sum(map(int,raw_input().split()))

////////////////////////////////////////////////////////////////////
FLOW006:

t = input()
while(t > 0):
	t -= 1
	sum=0
	num = input()
	while(num != 0):
		sum = sum + num%10;
		num = num/10;
	print sum

////////////////////////////////////////////////////////////////////
SNAPE:

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

////////////////////////////////////////////////////////////////////
RECIPE:

from fractions import gcd
t = input()
while(t > 0):
	t -= 1
	inp = map(int,raw_input().split())
	gc = inp[1]
	for i in range (2,inp[0]+1):
		gc = gcd(gc, inp[i])
	for i in range (1,inp[0]+1):
		print inp[i]/gc,
	print ''

////////////////////////////////////////////////////////////////////
REMISS:

t = input()
while(t > 0):
	t -= 1
	a,b = map(int,raw_input().split())
	print max(a,b)
	print a+b

////////////////////////////////////////////////////////////////////
FLOW002:

t = input()
while(t > 0):
	t -= 1
	a,b = map(int,raw_input().split())
	print a%b

////////////////////////////////////////////////////////////////////
START01:

inp = input()
print inp

////////////////////////////////////////////////////////////////////
LUCKFOUR:

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

////////////////////////////////////////////////////////////////////
FLOW004:

t = input()
while( t > 0):
	t -= 1
	s = raw_input()
	print int(s[0]) + int(s[len(s)-1])

////////////////////////////////////////////////////////////////////
FLOW007.py

t = input()
while(t > 0):
	reverse = 0
	t -= 1
	n = input()
	while(n != 0):
		reverse = reverse*10 + n%10
		n /= 10
	print reverse

////////////////////////////////////////////////////////////////////
FSQRT.py:

import math
t = input()
while(t > 0):
	t -= 1
	n = input()
	print int(math.sqrt(n))

////////////////////////////////////////////////////////////////////
COMM3:

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

////////////////////////////////////////////////////////////////////
FLOW017.py:

t = input()
for i in range(t):
	num = map(int,raw_input().split())
	num.sort()
	print num[1]

////////////////////////////////////////////////////////////////////
FLOW018:

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
////////////////////////////////////////////////////////////////////
FLOW008:

t = input()
while(t > 0):
	t -= 1
	n = input()
	if(n < 10):
		print 'What an obedient servant you are!'
	else:
		print '-1'

////////////////////////////////////////////////////////////////////
SMPAIR:

t = input()
while (t > 0):
	t -= 1
	n = input()
	numbers = []
	numbers = map(int,raw_input().split())
	numbers.sort()
	print numbers[0]+numbers[1]

////////////////////////////////////////////////////////////////////
FLOW005:

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

////////////////////////////////////////////////////////////////////
FLOW0013:

t = input()
while(t > 0):
	t -= 1
	a,b,c = map(int,raw_input().split())
	if( (a+b+c == 180) & (a > 0) & (b > 0) & (c > 0) ):
		print 'YES'
	else:
		print 'NO'

'''
http://stackoverflow.com/questions/890128/why-are-python-lambdas-useful
from sys import stdin
 
t = int(stdin.readline())
 
while t:
	a,b,c = map(int,stdin.readline().split())
	x = lambda a,b,c:a+b+c == 180
	if x(a,b,c):
		print "YES"
	else:
		print "NO"
	t = t - 1
'''
////////////////////////////////////////////////////////////////////
HEADBOB:

t = input()
while(t > 0):
	t -= 1
	n = input()
	n=0;y=0;ind=0
	s = raw_input()
	for i in range(0,len(s)):
		if( s[i] == 'N' ):
			n += 1
		elif( s[i] == 'Y' ):
			y += 1
		elif( s[i] == 'I' ):
			ind += 1

	if(ind != 0):
		print 'INDIAN'
	elif( (n != 0) & (y != 0) ):
		print 'NOT INDIAN'
	else:
		print 'NOT SURE'

////////////////////////////////////////////////////////////////////
PALL01:

t = input()
while(t > 0):
	reverse = 0
	t -= 1
	n = input()
	num = n
	while(n != 0):
		reverse = reverse*10 + n%10
		n /= 10
	if(num == reverse):
		print 'wins'
	else:
		print 'losses'

////////////////////////////////////////////////////////////////////
FLOW010:

t = input()
while(t > 0):
	t -= 1
	s = raw_input()
	if(s == 'B') | (s == 'b'):
		print 'BattleShip'
	elif(s == 'C') | (s == 'c'):
		print 'Cruiser'
	elif(s == 'D') | (s == 'd'):
		print 'Destroyer'
	else:
		print 'Frigate'

////////////////////////////////////////////////////////////////////
GDOG:

t = input()
for i in range (t):
	n,k = map(int,raw_input().split())
	mx=0
	for i in range (k,1,-1):
		mx = max(mx,n%i)
	print mx

'''
t = input()
for i in range (t):
	n,k = map(int,raw_input().split())
	mx=0
	for i in range (2,k+1):
		mx = max(mx,n%i)
	print mx
'''

////////////////////////////////////////////////////////////////////
FLOW016:

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

////////////////////////////////////////////////////////////////////
FLOW009:

# multiply > division
t = input()
while(t > 0):
	t -= 1
	q,p = map(int,raw_input().split())
	if (q > 1000):
		ans = ((q*p) - (q*p*0.1))
	else:
		ans = p*q*1.00000
	print "%.6f" % ans

////////////////////////////////////////////////////////////////////
CHOPRT:

t = input()
while(t > 0):
	t -= 1
	a,b = map(int,raw_input().split())
	if(a < b):
		print '<'
	elif(a > b):
		print '>'
	else:
		print '='

////////////////////////////////////////////////////////////////////
FLOW011:

# http://stackoverflow.com/questions/4626338/python-float-formatting-like-g-but-with-more-digits
t = input()
while(t > 0):
	t -= 1
	s = input()
	if(s < 1500):
		print s*2
	else:
		print '%g' %(float(s*1.98)+500)

////////////////////////////////////////////////////////////////////
FLOW014:

t = input()
while(t > 0):
	t -= 1
	hrd,cc,ts = map(float,raw_input().split())

	if( (hrd > 50) & (cc < 0.7) & (ts > 5600) ):
		print '10'
	elif( (hrd > 50) & (cc < 0.7) ):
		print '9'
	elif( (cc < 0.7) & (ts > 5600) ):
		print '8'
	elif( (hrd > 50) & (ts > 5600) ):
		print '7'
	elif( (hrd > 50) | (cc < 0.7) | (ts > 5600) ):
		print '6'
	elif( (hrd <= 50) & (cc >= 0.7) & (ts <= 5600) ):
		print '5'

////////////////////////////////////////////////////////////////////
AMR15A:

n = input()
weapons = map(int,raw_input().split())
even = 0;odd=0
for i in weapons:
	if(i % 2 == 0):
		even += 1
	else:
		odd += 1
if (even > odd):
	print 'READY FOR BATTLE'
else:
	print 'NOT READY'

////////////////////////////////////////////////////////////////////
TWOSTR:

t = input()
while(t > 0):
	f = 0;t -= 1
	s1 = raw_input()
	s2 = raw_input()
	for i in range(0,len(s1)):
		if((s1[i] == '?') | (s2[i] == '?')):
			continue
		if(s1[i] != s2[i]):
			f = 1
			break;
	if(f == 1):
		print 'No'
	else:
		print 'Yes'

////////////////////////////////////////////////////////////////////
TRICOIN:

t = input()
while(t > 0):
	t -= 1
	n = input()
	k=2;h=0;i=2
	while(1):
		h += 1
		if(n <= i):
			print h
			break;
		k += 1
		i += k

////////////////////////////////////////////////////////////////////
CHEFARRP:

t = input()
while(t > 0):
	t -= 1
	n = input()
	a = map(int,raw_input().split())
	res = 0
	for i in range(0,n):
		prod=1;sm=0;
		for j in range(i,n):
			prod = prod * a[j]
			sm = sm + a[j]
			if(prod == sm):
				res += 1;
	print res

////////////////////////////////////////////////////////////////////
FRUITS:

t = input()
while(t > 0):
	t -= 1
	n,m,k = map(int,raw_input().split())
	dif = abs(n-m)
	if(k >= dif):
		print '0'
	else:
		print dif-k

////////////////////////////////////////////////////////////////////
MNMX:

t = input()
while(t > 0):
	t -= 1
	n = input()
	numbers = map(int,raw_input().split())
	mn = numbers[0]
	for i in range(1,len(numbers)):
		mn = min(mn,numbers[i])
	print mn*(n-1)

////////////////////////////////////////////////////////////////////
MISSP:

t = input()
while(t > 0):
	t -= 1
	n = input()
	b = 0
	while(n > 0):
		n -= 1
		a = input()
		b = b^a
	print b

////////////////////////////////////////////////////////////////////
RECTSQ:

from fractions import gcd
t = input()
while(t > 0):
	t -= 1
	m,n = map(int,raw_input().split())
	gc = gcd(m,n)
	print (m*n)/(gc*gc)

////////////////////////////////////////////////////////////////////
CHEFSTLT:

t = input()
while(t > 0):
	t -= 1
	s1 = raw_input()
	s2 = raw_input()
	qb=0;qs=0;same=0;dif=0;
	for i in range (0,len(s1)):

		if(s1[i] == s2[i]):
			same += 1
			if(s1[i] == '?'):
				qb += 1
		
		if(s1[i] != s2[i]):
			dif += 1
			if( (s1[i] == '?') | (s2[i] == '?') ):
				qs += 1

	print len(s1)-same-qs,
	print dif+qb

////////////////////////////////////////////////////////////////////
DEVUGRAP:

t = input()
while(t > 0):
	t -= 1
	n,k = map(int,raw_input().split())
	a = map(int,raw_input().split())
	res=0;sub=0;add=0;
	for i in range (n):
		sub = a[i] % k;
		add = k - sub;

		if(a[i] >= k):
			res = res + min(sub, add)
		else:
			res = res + add
	print res

////////////////////////////////////////////////////////////////////
SPALNUM:

def reverse(text):
	return text[::-1]

def is_palindrome(text):
	return text == reverse(text)

t = input()
while(t > 0):
	t -= 1
	l,r = map(int,raw_input().split())
	sm = 0
	for i in range(l,r+1):
		s = str(i)
		if is_palindrome(s):
			sm += i
	print sm

////////////////////////////////////////////////////////////////////
LCH15JAB:

t = input()
while(t > 0):
	t -= 1;sm=0;f=0;
	count = []
	for i in range(26):
		count.append(0)

	s = raw_input()
	for i in range (len(s)):
		count[ord(s[i])-97] += 1

	sm = sum(count)
	for i in range(26):
		if(count[i] == sm-count[i]):
			f = 1
			break

	if (f == 1):
		print 'YES'
	else:
		print 'NO'

////////////////////////////////////////////////////////////////////
COPS:

t = input()
while(t > 0):
	t -= 1
	rang=0;res=0;left=0;right=0;num=[]

	m,x,y = map(int,raw_input().split())
	a = map(int,raw_input().split())
	a.sort()
	rang = x*y

	for i in range(101):
		num.append(0)

	for i in range(m):
		left = a[i] - rang
		right = a[i] + rang

		if(left <= 1):
			left = 1
		if(right >= 100):
			right = 100

		for j in range(left,right+1):
			num[j] = 1

	for i in range(101):
		res += num[i]
	print 100-res

# >>> chr(97)
# 'a'
# >>> ord('a')
# 97

////////////////////////////////////////////////////////////////////
CH09:

#Only for C,C++,JAVA
t = input()
while(t > 0):
	t -= 1
	s = raw_input()
	a = 0
	for i in range (len(s)):
		if(s[i] == 'a'):
			a += 1
	print min(a,len(s)-a)

////////////////////////////////////////////////////////////////////
RRJOKE:

t = input()
while(t > 0):
	t -= 1
	n = input()
	res = 0
	for i in range(1,n+1):
		a = map(int,raw_input().split())
		res = res ^ i
	print res

////////////////////////////////////////////////////////////////////
CHEFSQ:

t = input()
while(t > 0):
	t -= 1
	n = input()
	a = map(int,raw_input().split())
	f = input()
	b = map(int,raw_input().split())

	i=0;j=0
	while(i<f):
		while((j<n) & (i<f)):
			if(b[i] == a[j]):
				i += 1
			j += 1
		break
	if(i == f):
		print 'Yes'
	else:
		print 'No'

////////////////////////////////////////////////////////////////////
VCS:

t = input()
while(t > 0):
	t -= 1; ans = []; res1 = 0; res2 = 0;
	n,m,k = map(int,raw_input().split())
	m1 = map(int,raw_input().split())
	k1 = map(int,raw_input().split())

	for i in range(n):
		ans.append(0)

	for i in range(m):
		ans[m1[i]-1] += 1

	for i in range(k):
		ans[k1[i]-1] +=1

	for i in range(n):
		if(ans[i] == 2):
			res1 += 1
		if(ans[i] == 0):
			res2 += 1

	print res1,
	print res2 

////////////////////////////////////////////////////////////////////
STRPALIN:

t = input()
while(t > 0):
	t -= 1
	a = raw_input()
	b = raw_input()
	l1 = len(a)
	l2 = len(b)

	if(l1>l2):
		for y in range (l2):
			p=a.find(b[y])
			if(p != -1):
				print 'Yes'
				y=l2+1
				break
		if(y+1==l2):
			print 'No'
		
	else:
		for y in range (l1):
			p=b.find(a[y])
			if(p != -1):
				print 'Yes'
				y=l1+1
				break
		if(y+1==l1):
			print 'No'
