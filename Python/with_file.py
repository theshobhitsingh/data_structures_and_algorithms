# We do not need to close the file when we use with statement
with open('another.txt','r') as f:
    a = f.read()
    print(a)
# with open('another.txt','w') as f:
#     a = f.write(" Hi ")
#     print(a)