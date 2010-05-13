#!/usr/bin/python

while True :
	length = int(raw_input())
	if length == 0 :
		break
	curr = 1 
	stack_top = 2000 
	order = raw_input().split(' ')
	flag = 0
	for i in range(0,length) :
		if int (order[i]) > curr :
			#check stack top and push if less than that 
			if stack_top > int (order[i]) :
				stack_top = int (order[i])
				#print "pusing " , stack_top
			else :
				print "no"
				flag = 1 
				break
		elif int (order[i]) == curr :
			curr+=1 

	if flag != 1 : 
		print "yes"
	
