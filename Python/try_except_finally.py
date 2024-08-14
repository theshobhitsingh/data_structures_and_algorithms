try:
    i = input("Enter a number: ")
    i = int(i)
    c = 1/i
    print(c)

except Exception as e:
    print(e)
    exit()
    
finally:
    print("Successful!")