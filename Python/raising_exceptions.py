def increment(num):
    try:
        return int(num)+1
    except:
        raise ValueError("Not good :(  )")
    
a = increment('df364')
print(a)