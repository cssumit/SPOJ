import sys
for i in range(1,21):
	for j in range(1,21):
		if i==j:
			sys.stdout.write('.')
		else:
			sys.stdout.write('#')
	print('')
			
