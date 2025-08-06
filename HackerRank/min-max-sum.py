#!/bin/python3

import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    total = sum(arr)             
    min_val = min(arr)          
    max_val = max(arr)           
    print(total - max_val, total - min_val)

if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))
    miniMaxSum(arr)
