#include<stdio.h>
int main()
{
    char str[100];
    int n,i,j,temp;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter the names : ");
    for(i=0;i<n;i++)
    {
        scanf("%s",&str[i]);
    }
    for(i=0;i<n-1;i++)
    {
       int min=i;
       for(j=i+1;j<n;j++)
       {
        if(str[j]<str[min]);
        min=j;
       }
       if(min!=i)
       {
        int temp=str[i];
        str[i]=str[min];
        str[min]=temp;
       }
    }
    printf("After sorting array elements are : ");
    for(i=0;i<n;i++)
    {
        printf("%d",str[i]);
    }
}