import numpy as np 

def MaxNonAdjacentSum(arr , index ):
    if(index == 0 ): return arr[index]
    if(index < 0 ): return 0 
    take = arr[index] + MaxNonAdjacentSum(arr, index -2 ) 
    notTake = 0 + MaxNonAdjacentSum(arr , index - 1 )
    return max(take ,notTake)


def Memo(arr , index , dp ):
    dp[0] = arr[0]
    if(index < 0): return 0 
    if(dp[index] != -1 ): return dp[index]
    pick = dp[index] = arr[index] + Memo(arr, index - 2 , dp) 
    notPick = dp[index -1 ] = 0 + Memo(arr , index -1 , dp)

    return max(pick , notPick)

arr = [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
    31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
    41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
    61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
    71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
    81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
    91, 92, 93, 94, 95, 96, 97, 98, 99, 100]
# ans = MaxNonAdjacentSum(arr , len(arr) - 1 )
# print(ans)

dp = [-1] * len(arr)  
ans1 = Memo(arr , len(arr) -1  , dp )
print("\n" ,ans1)