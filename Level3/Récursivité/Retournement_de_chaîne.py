def fun(ch):
    if ch=='':
        return ''
    return ch[-1]+fun(ch[:len(ch)-1])
ch=input()
print(fun(ch))
