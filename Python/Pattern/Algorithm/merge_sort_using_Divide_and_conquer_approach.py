def merge(arr):
    if(len(arr)<=1):
        return arr
    mid=len(arr)//2
    left=merge(arr[:mid])
    right=merge(arr[mid:])
    merge_sort(left)
    merge_sort(right)
    return merge_sort(left,right)

def merge_sort(left, right):
    result = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i]<right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    result.extend(left[i:])
    result.extend(right[j:])
    return result