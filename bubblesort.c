#include<stdio.h>
void main()
{ 
int i=0,j,n,temp;
printf("enter no. of elements  to be inputed in array:");
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++){
printf("enter element at index %d\n",i+1);
scanf("%d",&arr[i]);}

for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(arr[j]>arr[j+1]){ 

temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}}}

printf(" sorted array is\n");
for(int i=0;i<n;i++){
printf("%d\n",arr[i]);
}
}
