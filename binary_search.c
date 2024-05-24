#include<stdio.h>
int main()
{
    int size, i, search, flag=0;
    printf("Enter array size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Array element : ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter searching element : ");
    scanf("%d",&search);
    //Logic of binary Search
    int start=0, end=size=-1;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==search)
        {
            flag=1;
            break;
        }
        else if(search<arr[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    if(flag==1)
    {
        printf("Found !!!\n");
    }
    else
    {
        printf("Not found !!!\n");
    }
}