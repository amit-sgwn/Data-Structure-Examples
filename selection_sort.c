#include<stdio.h>
#include<stdlib.h>

#define MAX 50
//define max according to your array size or no of input

int main(){
	int n,arr[MAX],min,i,j,index,temp;
	printf("Enter no of element to sort\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		min=10000000;
		for(j=i+1;j<n;j++){
			if(arr[j]<min){
				min=arr[j];
				index = j;
			}
		}
		if(min!=10000000 && min <arr[i]){
			temp =arr[index];
			arr[index] = arr[i];
			arr[i]= temp;
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
