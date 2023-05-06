def fun(a,b):
    if a==b:
        return str(b)
    return str(a)+' '+fun(a+1,b)
a,b=map(int, input().split())
print(fun(a,b))
