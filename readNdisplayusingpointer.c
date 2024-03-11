#include<stdio.h>
int main(){
    int arr[5],i,sum=0;
    printf("Enter Array Elements :\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array Elements : \n");
    for(i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    printf("%d\n",arr[i]);
}