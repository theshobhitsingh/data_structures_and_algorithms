# 🐍 💦 🔫

import random
def gameWin(comp, you):
    if comp == you:
        return None
    elif comp == 's':
        if you == 'w':
            return False
        elif you == 'g':
            return True
    elif comp == 'w':
        if you == 'g':
            return False
        elif you == 's':
            return True
    elif comp == 'g':
        if you == 's':
            return False
    elif you == 'w':
        return True

print("Computer's turn: Snake(s), Water(w), or Gun(g)?")
randNo = random.randint(1, 3)
print(randNo)

if randNo == 1:
    comp = 's'
elif randNo == 2:
    comp = 'w'
elif randNo == 3:
    comp = 'g'

you = input("Your turn: Snake(s), Water(w), or Gun(g)?")
result = gameWin(comp, you)

print(f"Computer chose {comp}")
print(f"You chose {you}")

if result == None:
    print("The game is a Tie!")
elif result:
    print("You Win!")
else:
    print("You Lose!")