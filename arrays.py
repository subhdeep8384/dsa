arr = [1 , 2, 3, 4, 5, 6, 7, 8]  
largest = arr[0]
smallest = arr[0]


for  i in range(len(arr) ) :
    if(arr[i] > largest) :
        largest = arr[i] 

arr.sort() 
print("The largest elemet after sorting is : ", arr[len(arr) - 1])  
print("The largest elemet is : " , largest )


for i in range(len(arr)):
    if(arr[i] < smallest):
        smallest = arr[i]

print("smallest element is ::" , smallest )
print("smallest element by sort is " , arr[0]); 