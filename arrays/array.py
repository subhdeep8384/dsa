import numpy as np 
a = np.array([1 ,12, 23, 4, 5, 16, 137, 137 , 137])

largest = a[0] 
sLargest = -1 

for i in range (len(a) ):
    if(a[i] > largest ):
        largest = a[i] 

print("the lagest elemet is : " , largest )


for i in range (len(a)) :
    if(a[i] > sLargest and a[i] < largest):
        sLargest = a[i]

print("second Largest element is " , sLargest) 


print("Another way is ")

a.sort() 

for i in range (len(a) - 2 , -1 , -1 ) :
    if(a[i] != largest) :
        sLargest = a[i] 
        break 

print("Second largest element by sorting is " , sLargest)

b = np.array([5,1,2,3,6,111,5,47]) 

l = b[0] 
sl = -1 
print(len(b))
for i in range(1 , len(b)):
    if(b[i] > l):
        sl = l 
        l = b[i]
    elif b[i] > sl and b[i] < l :
        sl = b[i]

print("Second largest is" , sl) 