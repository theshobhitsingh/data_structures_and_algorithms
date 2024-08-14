import string

substitution_dict = {}
data = ""
for i in range(len(string.ascii_letters)):
    substitution_dict[string.ascii_letters[i]] = string.ascii_letters[i-1]

print(substitution_dict)

with open("ip_file.txt", "r") as f:
    with open("op_file.txt", "w") as file:
        while True:
            c = f.read(1)
            
            if not c:
                print("End of file")
                break
            
            if c in substitution_dict:
                data = substitution_dict[c]
            else:
                data = c
                
            file.write(data)
            print(data)

file.close()
