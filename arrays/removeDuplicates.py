import numpy as np 
b = []
a = np.array([1,1, 2,2, 2,3, 4, 4, 4, 4, 5,5]) 
element = -1
for i in range(0 , len(a)):
    if(a[i] != element ):
        element = a[i]
        b.append(element)


nb = np.array(list(b))
print(nb)


my_set = set(a)
my_set1 = np.array(list(my_set))
print(type(my_set1) , my_set1)





for i in range(0 , len(a)) :
    if(a[i] == a[i+1]):
        a = np.delete(a , i)

print("aaaaaaaaaa",a)