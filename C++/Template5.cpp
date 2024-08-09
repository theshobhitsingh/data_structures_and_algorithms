#include<iostream>
using namespace std;
template<typename t>
t greatest(t arr[],int size){
	t ans=0;
	for(int i=0;i<size;i++){
		if(ans<arr[i]){
			ans = arr[i];
		}
	}
	return ans;
}
int main(){
	int num;
	printf("Enter the size of array:\n");
	cin>>num;
	float arr[num];
	printf("Enter the array elements:\n");
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	printf("The greatest elemrnt in the given array is:\n");
	cout<<greatest(arr,num);
}
