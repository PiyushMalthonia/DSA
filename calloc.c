#include<stdio.h>
#include<stdlib.h>
int main()
{
    //int arr[r];
    int *arr=(int*)calloc(5,sizeof(int));
    printf("Enter array elements :");
    int i;
    for(i=0;i<5;i++){
        scanf("%d",(arr+i));
    }
    printf("Array elements are : \n");
    for(i=0;i<5;i++){
        printf("%d\t",*(arr+i));
    }
    return 0;
}