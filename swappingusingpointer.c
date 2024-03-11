#include<stdio.h>
int main()
{
    int a,b,x;
    int *p1=&a,*p2=&b;
    printf("Enter Two Numbers :");
    scanf("%d%d",p1,p2);
    printf("BEFORE SWAPPING a=%d, b=%d\n",a,b);
    x=*p2;
    *p2=*p1;
    *p1=x;
    printf("after swapping a=%d,b=%d",a,b);
    return 0;
}