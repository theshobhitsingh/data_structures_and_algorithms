# def get_count(num_list):
#     count = 0
#     for i in range(len(num_list) - 1):
#         if num_list[i] == num_list[i + 1]:
#             count += 1
#     return count

# num_list = [1, 1, 5, 100, -20, -20, 6, 0, 0]
# print(get_count(num_list))

str = input("Enter a PAN number: ")
var = input("Enter a variable: ")
if var in str:
    print("Yes! Valid PAN")
else:
    print('No! Invalid PAN')