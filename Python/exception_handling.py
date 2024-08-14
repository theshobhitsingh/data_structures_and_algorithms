# try ... except ...finally
while True:

    print ("Press 'q' to quit the game ")
    a = input("Enter a number : ")
    if a == 'q':
        break

    try:
        a = int(a)
        if a>5:

            print("You entered a number greater than 5")
    except Exception as e:
        print(f"Your input resulted in an error: {e}")

print("Thank you! for playing the game.")
