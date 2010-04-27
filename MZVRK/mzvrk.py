#!/usr/bin/python 


i = 50 

inp = raw_input()

vals = inp.split(' ')

a =  float (vals[0] )
b =  float (vals[1] ) 

prev =  0 
sum = 0 
count = 0  
while i : 
	d =int ( (b - a) /( 1<<i) )
	n2 = b%(1<<i) 
	n1 = a%(1<<i)
	count = d 
	if n2 < n1 or a%(1<<i) == 0  :
		count+=1
	
	count = count - prev 
	sum += count*(1<<i)
	prev +=count 	
	i=i-1

# add odd numbers now 

sum += int ( (b - a) / 2  ) 
if  a % 2 == 1 or b %2 == 1 :
	sum+=1

print sum
	







