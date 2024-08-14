f=open('poems.txt','r')
t=f.read()
print(t)
if 'Twinkle' in t:
    print("Yes! Twinkle is present in the file.")
else:
    print("No! Twinkle is not present in the file.")
f.close()

