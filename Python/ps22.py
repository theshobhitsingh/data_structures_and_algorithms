x=10
def myfunction():
    global x
    x=x*2
    print("global variable x inside",x)
    return myfunction()
print("global variable in scope",x)
