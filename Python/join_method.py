list = [ 'Laptop' , 'SmartPhone' , 'Neckband' , 'Charger']
tuple = ('Laptop' , 'SmartPhone' , 'Neckband' , 'Charger')

sentence = ' and '.join(list)
sentence = ' \n '.join(list)
sentence = '<-*->'.join(list)

sen = ' or '.join(tuple)
sen = ' # '.join(tuple)
sen = ' <> '.join(tuple)

print(sentence)
print(sen)
print(type(sentence))

# Table of 7

l = [str(i*7) for i  in range(1,11)]
print(l)
vertical_table = "\n".join(l)
print(vertical_table)