while True:
    try:
        a = int(input("Enter a number: "))
        c = 1 / a
        print(c)
    except ValueError as e:
        print("Please Enrte a valid value!")
        print(e)
    except ZeroDivisionError as e:
        print("Make sure that you are not dividing by Zero!")
        print(e)
    else:
        print("No exceptions occurred!")
        break
    finally:
        print("Thanks for using our code :)")

