import numpy as np 

def MaxNonAdjacentSum(arr , index ):
    if(index == 0 ): return arr[index]
    if(index < 0 ): return 0 
    take = arr[index] + MaxNonAdjacentSum(arr, index -2 ) 
    notTake = 0 + MaxNonAdjacentSum(arr , index - 1 )
    return max(take ,notTake)



arr = [2 ,1 , 4, 9]
ans = MaxNonAdjacentSum(arr , len(arr) - 1 )
print(ans)