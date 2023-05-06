def hanoi(n,d,a,i):
    if n==1:
        print(d,' -> ',a)
        return
    hanoi(n-1,d,i,a)
    print(d,' -> ',a)
    hanoi(n-1,i,a,d)
a=int(input())
hanoi(a,1,3,2)
