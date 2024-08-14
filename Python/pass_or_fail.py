sub1 = int(input("Enter the marks of the first subject:\n"))
sub2 = int(input("Enter the marks of the second subject:\n"))
sub3 = int(input("Enter the marks of the third subject:\n"))

if sub1 < 33 or sub2 < 33 or sub3 < 33:
    print("Sorry! You have failed due to less than 33% in one of the subjects.")
elif (sub1 + sub2 + sub3) / 3 < 40:
    print("Sorry! You have failed due to a total percentage less than 40%.")
else:
    print("Congratulations! You have passed this examination.")
