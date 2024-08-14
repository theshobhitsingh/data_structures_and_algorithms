sc=200
unit=int(input("enter unitsc="))
if (unit==0):
 print(0)
if(unit>=1 or unit<=99):
    
    bill=sc+unit*5
if(unit>=100 or unit<=199):
    
    bill=sc+unit*7
if(unit>=200 or unit<=499):    
    
    bill=sc+unit*10
    total=bill+0.18*bill
    
print("total amount is",total)