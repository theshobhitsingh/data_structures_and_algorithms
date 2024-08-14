# # list=[1,2,3,4,5]
# # list2=["abc","z",'SS']
# # print(len(list))
# # print(min(list))
# # print(min(list2))
# # print(max(list))
# # print(max(list2))
# # print(sum(list))
# # del list[4]
# # print(list)
# # list.remove(2)
# # print(list)
# # print(list)
# l = [1, 2, 3, 1, 3.3434, 0]
# print(all(l))  # Works like AND
# print(any(l))  # Works like OR
# print(max(l))
# print(min(l))
# print(sum(l))
# print(l.index(3.3434))
# print(l.count(3.3434))
# t = (1, 2, 3, 3)
# l.sort()
# print(l)
# l.reverse()
# print(l)
# l.sort()
# print(l)
# l.sort(reverse=True)
# print(l)
# print(l)

# # Jugaad for tuple
# tpl = (1, 2, 3, 4, 5, 6, 7, 8, 9, 10)
# lst = list(tpl)
# for i in range(0, 10, 2):
#     lst[i] = lst[i]*2
# tpl2 = tuple(lst)
# print(tpl2)

n = int(input("Enter the number of the student: "))
marks = []
name = []
per = []
i = 0
while (i < n+1):
    name.append(input("Enter the name of the student: "))
    m = int(input("Enter the marks of the student: "))
    marks=marks.append(m)
    p = (m/500)*100
    i+=1
    per.append(p)
    print(per)
print('The name of the student: ', name)
print('The marks of the student: ', marks)
print('The per of the student: ', per)
