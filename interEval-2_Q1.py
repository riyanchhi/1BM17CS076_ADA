def partition(a,low,high):
	pivot=a[low]
	i=low+1
	j=high
	while(1):
		while(a[i]<=pivot and i<=high):
			i=i+1
		while(a[j]>pivot and j>=low):
			j=j-1
		if(i<j):
			a[i],a[j]=a[j],a[i]
		else:
			a[low]=a[j]
			a[j]=pivot
			return j
def Quicksort(a,low,high):
	if low<high:
		pivot_pos=partition(a,low,high)
		Quicksort(a,low,pivot_pos-1)
		Quicksort(a,pivot_pos+1,high)
a=[int(i) for i in input().split()]
n=len(a)
Quicksort(a,0,n-1)
print(a)
