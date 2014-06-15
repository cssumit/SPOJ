import sys
import random
n=input()
a = [[0 for x in xrange(n)] for x in xrange(n)] 
for i in range (0,n):
	for j in range (0,n):
		a[i][j]=random.randint(10,1000)
for i in range (0,n):
	for j in range (0,n):	
		sys.stdout.write(str(a[i][j])+" ")
	print 
