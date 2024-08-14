# 🪨 🗞️ ✂️
import random

def gameWin(comp, you):
    if comp == you:
        return None
    elif comp == 'r':
        if you == 's':
            return False
        elif you == 'p':
            return True
    elif comp == 'p':
        if you == 'r':
            return False
        elif you == 's':
            return True
    elif comp == 's':
        if you == 'p':
            return False
        elif you == 'r':
            return True

print("Computer's turn: Rock(r), Paper(p), or Scissors(s)?")
randNo = random.randint(1, 3)
print(randNo)

if randNo == 1:
    comp = 'r'
elif randNo == 2:
    comp = 'p'
elif randNo == 3:
    comp = 's'

you = input("Your turn: Rock(r), Paper(p), or Scissors(s)?")
result = gameWin(comp, you)

print(f"Computer chose {comp}")
print(f"You chose {you}")

if result == None:
    print("The game is a Tie!")
elif result:
    print("You Win!")
else:
    print("You Lose!")
