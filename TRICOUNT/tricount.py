#!/usr/bin/python
<<<<<<< HEAD:TRICOUNT/tricount.py


cases_s = raw_input()
cases = int(cases_s)

while cases : 
	inp = raw_input()
	n = int (inp)
	if n == 1 : 
		print "1"
	else : 
		sum=(1<<(n+1)) - n  
		if n%2 == 0 : 
			print sum-1
		else:
			print sum 
	cases -=1



=======
cases = int(raw_input())
while cases : 
	n = int(raw_input())
	print (n*(n+2)*(2*n+1))/8
	cases -=1

>>>>>>> d01db76fefc1f7a2620d84d6513fd4432ddc58e7:TRICOUNT/tricount.py
