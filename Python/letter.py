#wap to check vowel and consonants
l=["a","i","e","o","u"]
letter = input("Enter any letter:")
if 'a'<=letter.lower()<='z':
   if(letter.lower() in l):
    print("vowel")
   else:
    print("consonant")
else:
    print("special symbol")    


    