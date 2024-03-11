#include<stdio.h>
int main()
{
    int a[40],x;
    printf("Enter the size : ");
    scanf("%d",&x);
    printf("Entr array elements");
    for(int i=0;i<x;i++)
    {
        scanf("%d",a+i);
    }
    for(int i=0;i<x;i++)
    printf("%d\t",*(a+i));
    return 0;
}
