def fn( arr ) :
    n = len(arr) 
    five =   ten = twenty = 0

    for i in range(n) :
        if arr[i] == 5 :
            five += 1
        elif arr[i] == 10 :
            if five > 0 : 
                five -= 1 
                ten += 1
            else : 
                return False 
        elif arr[i] == 20 :
            if ten >= 1 and five > 0  :
                twenty += 1 
                ten -+ 1 
                five -= 1 
            elif five >= 3  :
                five -= 3 
            else :
                return False 
    return True


arr = [5,5,5,10,20]
print(fn(arr))
            