import math
t=input()
i=0
while (i<t):
	n=input()
	if (n==1 or n==2):
		print(n)
	else:
		j=2
		k=2
		while (k<n):
			j=j+1
			l=math.floor(float(j)/2)
			m=math.factorial(l)
			if(j%2!=0):
				o=m*m*(l+1)
			else:
				o=m*m
			k=math.factorial(j)/o
		print(j)
	i=i+1		
