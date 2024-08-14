nationality=input("Enter your country: ")
age=int(input("Enter the age of the person: "))
if (nationality.upper()=='INDIAN'):
    if(age>=18):
        print("Yes! You are eligible to vote✌️")
else:
    print("No! You are not eligible to vote👎")