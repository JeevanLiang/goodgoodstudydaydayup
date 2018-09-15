# -*- coding: utf-8 -*-
s=input()
ss=s.split(' ')
if(len(ss)==0):
    print(0)
else:
    i=range(len(ss))
    x=0
    for j in reversed(i):
        if(ss[j]!=''):
            print(len(ss[j]))
            x=1
            break;
    if(x==0) :
        print(0)
            