arr = [1 , 2, 3, 4, 5, 6, 7, 8]  
largest = arr[0]


for  i in range(len(arr) ) :
    if(arr[i] > largest) :
        largest = arr[i] ;


print("The largest elemet is : " , largest )
