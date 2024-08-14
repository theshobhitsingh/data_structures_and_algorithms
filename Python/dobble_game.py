import random

def generate_card():
    symbols = ['♥', '♦', '♠', '♣']
    card = []
    for i in range(1, 9):
        card.append(str(i))
    for symbol in symbols:
        card.append(symbol)
    random.shuffle(card)
    return card

def main():
    card1 = generate_card()
    card2 = generate_card()

    print("Dobble Card 1:")
    for i in range(4):
        print(' '.join(card1[i * 4: (i + 1) * 4]))

    print("\nDobble Card 2:")
    for i in range(4):
        print(' '.join(card2[i * 4: (i + 1) * 4]))

    common_symbol = random.choice(card1)

    user_input = input(f"\nEnter the common symbol between the cards: ")
    
    if user_input == common_symbol:
        print("Congratulations! You've won!")
    else:
        print(f"Sorry, the common symbol was {common_symbol}. Try again!")

if __name__ == "__main__":
    main()
