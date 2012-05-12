
arr = list()
for x in xrange(0,5678) :
    arr.append([ z+x for  z in  xrange(0,1234)])

(cmd,x,y) = raw_input().split(' ')

x=int(x) - 1
y=int(y) - 1

if cmd == 'R' :
    tmp = arr[x]
    arr[x] =  arr[y]
    arr[y] =  tmp
elif cmd == 'C':
    pass
elif cmd == 'Q' :
    pass
elif cmd == 'W':
    pass
else: 
    pass
