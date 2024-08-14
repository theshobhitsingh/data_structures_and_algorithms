dict={
    "Billi":"Cat",
    "Kutta":"Dog",
    "Insaan":"Human"}
print("Options are:\n",dict.keys())
a=input("Enter the Hindi word:\n")
#Below line will not throw an error if the key is not present in the dictionary
print("The meaning in English is:\n",dict.get(a))