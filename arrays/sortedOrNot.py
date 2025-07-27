import numpy as np 

a = np.array([1,2,3,4,5,6,7 ])

for i in range(1, len(a) ) :
    if(a[i] <= a[i-1]):
        print("Array is not sorted")
        break
    else :
        print("Array is sorted")