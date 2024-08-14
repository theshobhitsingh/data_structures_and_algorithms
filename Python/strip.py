# # strip() removes the extra spaces from the beginning and end of the string
str = '    My   name   is   Shobhit   Singh'
print(str)
print(str.strip())
def remove_and_split(string , word ):
    updated_string=string.replace(word , " ")
    return updated_string.strip()
str = '    My   name   is   Shobhit   Singh '
r= remove_and_split(str , "My" )
print(r)

