#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p1=(int*)malloc(sizeof(int));
    printf("Enter Number :");
    scanf("%d",p1);
     int *p2=(int*)malloc(sizeof(int));
    printf("Enter Number :");
    scanf("%d",p2);
    printf("Sum = %d",*p1+*p2);
    return 0;
}