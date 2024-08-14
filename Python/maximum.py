def max(n1,n2,n3):
    if(n1>n2):
        if(n1>n3):
            return n1
        else:
            return n3
    else:
        if(n2>n3):
                return n2
        else:
             return n3

n1=int(input("Enter the first number: "))
n2=int(input("Enter the second number: "))
n3=int(input("Enter the third number: "))
m=max(n1,n2,n3)
print ("The biggest number of all is " +str(m))