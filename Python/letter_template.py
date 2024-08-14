# The code is a Python program that generates a letter template and prompts the user to enter their
# name and the current date. The program then replaces the placeholders <|Name|> and <|Date|> in the
# letter template with the user's input and prints the modified letter.
letter = '''Dear <|Name|>,
We want to inform you about your selection
Congartulations! You are selected!!
We welcome you onboard
Thanks and regards
<|Date|>'''
name = input("Enter your Name:\n")
date = input("Enter the date:\n")
letter = letter.replace("<|Name|>", name)
letter = letter.replace("<|Date|>", date)
print(letter)
# letter formatting using escape sequences
lt = "Dear Harry!,This Python course is really very helpful.Thank you so much"
print(lt)
formatted_lt = "Dear Harry!,\n\tThis Python course is really very helpful.\nThank you so much!"
print(formatted_lt)
