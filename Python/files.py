# Use the open() function to read the content of a file
f = open(' another.txt ' , 'r')
# By default the mode is 'r'
data = f.read()
# data = f.read(5) will read the first 5 characters
f.readline() # --> will print only the first line
f.readline()# --> will print the next line
print(data)
f.close