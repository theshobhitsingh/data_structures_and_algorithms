# Python program to take space
# separated input as a string
# split and store it to a list
# and print the string list

# input the list as string
string = input("Enter elements (Space-Separated): ")

# split the strings and store it to a list
lst = string.split() 
print('The list is:', lst) # printing the list

t1 = (1,2,3,4,5)
t1[0]=10
print(t1)

Blackbox

write a python program to print all unique elements of list with frequency


Here is a Python program that prints all unique elements of a list along with their frequency:

python
Copy code
def print_unique_elements(lst):
    # Create an empty dictionary to store unique elements and their frequencies
    unique_elements = {}

    # Iterate over each element in the list
    for element in lst:
        # If the element is already in the dictionary, increment its frequency
        if element in unique_elements:
            unique_elements[element] += 1
        # Otherwise, add the element to the dictionary with a frequency of 1
        else:
            unique_elements[element] = 1

    # Print each unique element and its frequency
    for element, frequency in unique_elements.items():
        print(f"{element}: {frequency}")

# Test the function with a sample list
sample_list = [1, 2, 3, 2, 1, 3, 4, 4, 4]
print_unique_elements(sample_list)
This program uses a dictionary to keep track of unique elements and their frequencies. The print_unique_elements function iterates over each element in the list, and for each element, it checks if the element is already in the dictionary. If it is, the function increments the frequency of the element. If the element is not in the dictionary, the function adds the element to the dictionary with a frequency of 1. Finally, the function prints each unique element and its frequency.



Here are some follow-up suggestion:
How to print the frequency of each unique element in a list?
How to print the unique elements of a list in sorted order?
How to print the unique elements of a list in reverse order?
Scroll to bottom

Continue

New Chat
Ask a coding question.
Send message
