class Library:
    def __init__(self, listOfBooks):
        self.books = listOfBooks

    def displayAvailableBooks(self):
        print("The books present in the Library are : ")
        for book in self.books:
            print(" *" + book)

    def borrowBook(self, bookName):
        if bookName in self.books:
            print(
                f"You have been isuued the book of {bookName} . Please keep it safe and return it within 10 days.")
            self.books.remove(bookName)
            return True
        else:
            print("Sorry! This book is either not available or already issued to someone else.")
            return False

    def returnBook(self, bookName):
        self.books.append(bookName)
        print("Thanks for returning this book. Happy Learning :) ")


class Student:
    def requestBook(self):
        self.book = input(
            "Enter the name of the book that you want to issue: ")
        return self.book

    def returnBook(self):
        self.book = input(
            "Enter the name of the book that to want to return: ")
        return self.book


if __name__ == "__main__":
    centralLibrary = Library(
        ["C", "C++", " Java", "Python", "DSA", "Web-Dev", "App-Dev"])
    student = Student()

while (True):
    Welcome = "           *****Welcome to The Central Library*****                   "
    print(Welcome)
    print("Choose an option:")
    print('''1. List of Books
        2. Request a Book
        3. Return/Donate a Book
        4. Exit the library
    ''')
    a = int(input("Enter a choice: "))
    if a == 1:
        centralLibrary.displayAvailableBooks()
    elif a == 2:
        centralLibrary.borrowBook(student.requestBook())
    elif a == 3:
        centralLibrary.returnBook(student.returnBook())
    elif a == 4:
        print("Thank you for coming! Have a great day ahead :) ")
        exit()
    else:
        print("Invalid Choice! Choosse the correct option.")
