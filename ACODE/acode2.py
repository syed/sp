#!/usr/bin/python


table = {}
table["0"] = 0
for i in range(1,10) :
	table[str(i)]=1
for i in range(10,27) :
	table[str(i)] = 2
for i in range(27,100) :
	table[str(i)] = 1

table['20']=1
table['10']=1
table['']=0

while True : 
	num = raw_input()
	if num == '0' :
		break

	length = len(num)
	i = length-3
	while i >= 0 :
		table[num[i:]] = table[num[i+1:]] + table[num[i+2:]]
		print table
		i-=1
	print table[num]
