#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack[SIZE], top1=-1, top2=SIZE;
void push1(int value)
{
    if(top1==top2-1)
    printf("Stack-1 Overflow !!!");
    
    else
    {
        stack[++top1]=value;
        printf("Element Added !!!\n");
    }
}
void push2(int value)
{
    if(top2==top1)
    printf("Stack-2 Overflow !!!");
    else
    {
        stack[--top2]=value;
        printf("Element Added !!!\n");
    }
}
void show1()
{
    if(top1==-1)
    printf("Stack-1 is empty !!!");
    else
    {
        int i;
        for(i=top1; i>=0; i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
void show2()
{
    if(top2==SIZE)
    printf("Stack-2 is empty !!!");
    else
    {
        int i;
        for(i=top2; i<SIZE; i++)
        {
            printf("%d\n",stack[i]);
        }
    }
}
void pop1()
{
    if(top1==-1)
    printf("Stack-1 Underflow !!!");
    else
    {
        int value = stack[top1];
        top1--;
        printf("Element %d removed from the Stack-1",value);
    }
}
void pop2()
{
    if(top2==SIZE)
    printf("Stack-2 Underflow !!!");
    else
    {
        int value = stack[top2];
        top2++;
        printf("Element %d removed from the Stack-2",value);
    }
}
void peek1()
{
    if(top1==-1)
    printf("Stack-1 is empty !!!");
    else
    {
        printf("Top element in Stack-1 : %d",stack[top1]);
    }
}
void peek2()
{
    if(top2==SIZE)
    printf("Stack-2 is empty !!!");
    else
    {
        printf("Top element in Stack-2 : %d",stack[top2]);
    }
}
int main()
{
    while(1)
    {
        system("cls");
        printf("1. Push Data in Stack-1\n");
        printf("2. Push Data in Stack-2\n");
        printf("3. Pop Data from Stack-1\n");
        printf("4. Pop Data from Stack-2\n");
        printf("5. Peek Data from Stack-1\n");
        printf("6. Peek Data from Stack-2\n");
        printf("7. Show Data of Stack-1\n");
        printf("8. Show Data of Stack-2\n");
        printf("9. Exit\n");
        int choice,val;
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the value : ");
            scanf("%d",&val);
            push1(val);
            break;
            case 2:
            printf("Enter the value : ");
            scanf("%d",&val);
            push2(val);
            break;
            case 3:
            pop1();
            break;
            case 4:
            pop2();
            break;
            case 5:
            peek1();
            break;
            case 6:
            peek2();
            break;
            case 7:
            show1();
            break;
            case 8:
            show2();
            break;
            case 9:
            exit(0);
            break;
            default:
            printf("Invalid Choice !!!!\n");
            break;
        }
        printf("\n\n");
        system("pause");
    }
    return 0;
}