# Here,"Hi Ajnabee Insaan!" is the default argument of the function "good_day"
def good_day(name="Hi Ajnabee Insaan!"):
     print("Hello Ji! Have a good day!"+ name)

name=input("Enter your good name please:\n")
good_day(name)
good_day() # -->If we will not pass any value in the function;it will take the default value