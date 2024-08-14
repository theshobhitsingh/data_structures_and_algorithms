with open(" log.txt ")as f:
    content = f.read().lower()
    if 'python' in content:
        print("Yes! python is present in the log file")
    else:
        print("No! python is not present in the log file")

# To find the line number in which python is present

content = True
i=1
with open(" log.txt ")as f:
    while content:
        content = f.readline()
    if 'python' in content.lower():
        print(content)
        print(f"Yes! python is present in the log file on the line number {i}" )
        i+=1


