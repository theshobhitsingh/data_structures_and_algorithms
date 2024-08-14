def read_file(filename):
    try:
        with open(filename, "r") as f:
            print(f.read())
    except FileNotFoundError:
        print(f"File {filename} is not found!")
    except IOError:
        print(f"An error occurred while reading {filename}!")

# List of filenames
file_list = ["1.txt", "2.txt", "3.txt"]

# Read each file in the list
for filename in file_list:
    read_file(filename)
