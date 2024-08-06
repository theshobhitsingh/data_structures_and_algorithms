#include<stdio.h>   //Binary Search
int main(){
	int a[100],low,mid,high,search,n,i;
	printf("Enter the array size\n:");
	scanf("%d",&n);
	printf("Enter array elements\n:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the search element:");
	scanf("%d",&search);
	high=n-1;
	low=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(search>a[mid]){
			low=mid+1;
		}
		else if(search<a[mid]){
			high=mid-1;
		}
			else 
			{	
				printf("\n Number is found at %d location",(mid+1));
				break;
			}
			if(low>high){
				printf("\n Number is not found");
			}
		}
	}
