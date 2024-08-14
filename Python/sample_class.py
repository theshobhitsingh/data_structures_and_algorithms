class sample:
    a = "Shobhit" # Here,a is a class attribute

object = sample()
object.a = "Singh" # Here, a is an object attribute

sample.a = "Super" # ---> It will change the class attribute

print(sample.a)
print(object.a)
