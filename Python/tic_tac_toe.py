import numpy as np

board = numpy.array{[['-', '', '-'], ['-', '', ''], ['-', '-', '-']]}
p1s = 'X'
p2s = 'O'

def print_board():
    for row in board:
        print(' | '.join(row))
        print('-' * 9)

def check_rows(symbol):
    for r in range(3):
        if all(board[r] == symbol):
            print_board()
            print(symbol, 'won')
            return True
    return False

def check_cols(symbol):
    for c in range(3):
        if all(board[:, c] == symbol):
            print_board()
            print(symbol, 'won')
            return True
    return False

def check_diagonals(symbol):
    if all(np.diag(board) == symbol) or all(np.diag(np.fliplr(board)) == symbol):
        print_board()
        print(symbol, 'won')
        return True
    return False

def check_win(symbol):
    if check_rows(symbol) or check_cols(symbol) or check_diagonals(symbol):
        return True
    return False

# Example usage
print_board()
print(check_win(p1s))
