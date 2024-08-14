for i in range(1,101):
    if (i% 3 == 0):
        print(str(i)+" is Fizz")
    elif (i % 5 ==0):
        print(str(i)+" is Buzz")
    if(i % 3==0 and i % 5 ==0):
        print(str(i)+" is Fizzbuzz")
    else:
        print(str(i))
        
    