#!/usr/bin/python 

cases = int ( raw_input())

while cases : 
	words = raw_input().split(' ')
	max_count = 1 
	num = len( words )
	i = 0  
	prev_len = len(words[0])
	x = prev_len
	while i < num :
		count = 0 
		while i < num   :
			x = len(words[i])
			if x == prev_len :
				count+=1
				i+=1
			else  :
				break
		
		prev_len=x
		if count > max_count : 
			max_count = count 

	print max_count
	cases -=1
			



