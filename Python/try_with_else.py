try:
    i = input("Enter a number: ")
    i = int(i)
except Exception as e:
    print(e)
else:
    print("Successful!")