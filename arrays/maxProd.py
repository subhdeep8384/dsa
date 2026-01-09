import numpy as np 

def maximunProd(arr) :
    n = len(arr)
    maximun = 0 

    for i in range(0 , n ):
        for j in range(i , n + 1):
            prod = 1
            for k in range(i , j ):
                prod *= arr[k]
            maximun = max(prod , maximun)
    
    return maximun


def maximumProdOptimun(arr):
    preffix = 1 
    suffix = 1 

    maximum = 0 
    n = len(arr)
    for i in range(0 , n ):
        if(suffix == 0 ): suffix = 1 
        if(preffix == 0 ): preffix = 1

        preffix = preffix * arr[i] 
        suffix = suffix * arr[n - i - 1]
        maximum = max(maximum , max(suffix , preffix ))

    return maximum 


arr = np.array([ -2 , -30, 12 , 0 , 4 , 1200 ])
print(maximunProd(arr) , "\n" , maximumProdOptimun(arr))