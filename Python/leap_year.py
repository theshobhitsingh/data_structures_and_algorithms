leap = int(input("Enter a year: "))
l = []
if ((leap%4==0) and (leap%100!=0)) or (leap%400==0):
    i = 0
    while(i<15):
        print(leap)
        leap = leap + 4
        i = i+1
        l.append(leap)
    print("Leap year")
else:
     print("Not a leap year")
print(l)
