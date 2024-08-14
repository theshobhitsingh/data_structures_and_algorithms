# break will end the loop immediately as soon as the given conditon becomes true
# else will only execute when the for loop is executed successfuly
for i in range (10):
    print(i)
    if i==11:
     break
else:
    print("This is inside else of for")