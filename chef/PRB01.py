def isprime(n):
	if (n <= 1):
		return 0
	if (n <= 3):
		return 1
 
	if (n%2 == 0 or n%3 == 0):
		return 0

	for i in range(5, n+1,6):				#for (int i=5; i*i<=n; i=i+6)
		if(i*i > n+1):
			break
		if (n%i == 0 or n%(i+2) == 0):
			return 0
	return 1

t = input()
while(t > 0):
	t -= 1
	num = input()
	if(isprime(num)):
		print 'yes'
	else:
		print 'no'