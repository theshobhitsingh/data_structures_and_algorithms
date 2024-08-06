#include<stdio.h>
int main(){
int i,key,low,mid,high,n;
int a[100];
printf("Enter the elements:");
scanf("%d",&n);
printf("\n Enter the array");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
low=a[0];
high=a[n-1];
mid=(low+high)/2;
printf("Enter the key:");
scanf("%d",&key);
for(i=0;i<n;i++){
if(key>mid){
if(key==a[i])
{
printf("On index %d the value is %d",i,key);
}
}
}
for(i=0;i<n;i++)
{
if(key<mid)
{
if(key==a[i])
{
printf("On index %d the value is %d",i,key);
            }

       
else
{
printf("Not found");
break;
}
}
}

}
