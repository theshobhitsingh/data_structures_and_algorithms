for i in range(1,21):
    with open(f"Table of {i}.txt" , 'w') as f:
     for j in range(1,11):
        f.write(f"{i} X {j} = {i * j}\n")
