a = 55 # Global Variable
def fun1():
    global a # Use global variable
    print (f"Print stetement 1:{a}")
    a =10 # Local Variable (if global keyword is not used)
    print (f"Print stetement 2:{a}")

fun1()
print (a)