#  A
#  AB
#  ABC 
#  ABCD 
#  ABCDE

n=int(input("Enter the number of rows: "))
for i in range(0,n):
    for j in range(0,i+1):
        print(chr(65+j),end=" ")
    print()