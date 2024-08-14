def game():
    return 111

score = game()

with open('highscore.txt') as f:
    highscore = int(f.read())
    
if highscore=='':
    with open('highscore.txt', 'w') as f:
        f.write(str(score))
elif int(highscore) < score :
    with open('highscore.txt', 'w') as f:
        f.write(str(score))
