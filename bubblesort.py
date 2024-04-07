#this code has the ability to coduct bubble sort algorithm on int values only
print("enter no. of values to be inputed")
n=int(input())

l=[]
print("enter elements in array:\n")
for i in range(0,n):
    ele=input()
    l.append(ele)
print("unsorted elements are\n",l)
for j in range(0,n-1):
    for i in range(0,n-1):
        if(l[i]>l[i+1]):
            temp = l[i]
            l[i] = l[i+1]
            l[i+1] = temp
print("sorted array is:\n",l)
