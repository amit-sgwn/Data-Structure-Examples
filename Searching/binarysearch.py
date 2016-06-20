arr=[1,2,3,4,6,7,8,23,25,27,29,34,38,41,43,47,50,51,59,66]

def bin_search(arr,l,r,x):
	mid =l + (r-l)/2
	if l<r:
		if arr[mid]==x :
			print arr[mid]
			return mid
		else:
			val=bin_search(arr,l,mid,x)
			val1=bin_search(arr,mid+1,r,x)
			if arr[val]==x :
				return val
			if arr[val1]==x :
				return val1
	return 0;
	
	


result = bin_search(arr,0,len(arr)-1,29)
if arr[result]==29 :
	print "Found at index",result
else:
	print "Not found"
