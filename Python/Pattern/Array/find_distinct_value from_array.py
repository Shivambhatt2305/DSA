def distinct(arr):
    n=len(arr)
    count=0
    arr.sort()
    for i in range(0,n-1):
        if(arr[i]==arr[i+1]):
            count+=1
            for j in range(i,n-1):
                arr[j]=arr[j+1]
    n=n-count
    arr=arr[:n+1]   
    
    return arr

arr=[1,2,3,4,5,5,6,7,8,8]
print(distinct(arr))