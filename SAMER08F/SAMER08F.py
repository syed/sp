from sys import stdin

for line in stdin.readlines() :
    length = int(line)
    if length == 0 :
        break
    tot = 0 
    for i in range(0,length) :
        tot+= ( length - i ) * ( length - i )

    print tot
