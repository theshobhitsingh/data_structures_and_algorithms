Dict = {
    "warrior": "A Brave WAR Hero",
    "super": "Shobhit Singh",
    "marks": [100, 200, 300, 400, 500],
    "dict2": {"HERO": 'I am'},
    1:1000
}
#Printing all the keys of the dictionary
print(Dict.keys())
print(type((Dict.keys())))
#We can also do Typecasting to list
print(list((Dict.keys())))
print(type((Dict.keys())))
#Printing all the values of the dictionary
print(Dict.values())
#Prints all the (key,value) for all the contents of the dictionary
print(Dict.items())
#Updates the existing dictionary by adding key-value pairs from a new dictionary
print(Dict)
updateDict ={
    "ISRO":"Indian Space Research Organization",
    "DRDO":"Defence Research and Development Organization "
}
Dict.update(updateDict)
print(Dict['DRDO']) #prints value associated with the key
print(Dict.get('DRDO')) #prints value associated with the key

#The difference between .get() and [] syntax in the dictionary

print(Dict["ISRO1"]) #-->Throws error as ISRO1 is not present in the dictionary
print(Dict.get("ISRO1"))#-->Returns None if ISRO1 is not present int the dictionary