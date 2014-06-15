MOD=109546051211
t=raw_input()
n=int(t)
if(n>=587117):
	print(0)
else:
	a=1
	b=1
	for i in range(1,n+1):
		a=(a*i)%MOD
		b=(b*a)%MOD
	print(b)
