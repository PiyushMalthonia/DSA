#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack1[SIZE], top1=-1;
int stack2[SIZE], top2=-1;
int push1(){
    if(top1==SIZE-1)
printf("Stack-1 Overflow\n");
    else{
        top1++;
        int val;
        printf("Enter Value :");
        scanf("%d",&val);
        stack1[top1]=val;
        printf("Element added");
    }
}
int push2(){
    if(top2==SIZE-1)
printf("Stack-2 Overflow\n");
    else{
        top2++;
        int val;
        printf("Enter Value :");
        scanf("%d",&val); 
        stack2[top2]=val;
        printf("Element added");
    }
}
void show1(){
    if(top1==-1)
    printf("Stack-1 is Empty");
    else{
        int i;
        printf("Stack Elements are : \n");
        for(i=top1;i>=0;i--){
        printf("%d\n",stack1[i]);
        }
    }
}
void show2(){
    if(top2==-1)
    printf("Stack-2 is Empty");
    else{
        int i;
        printf("Stack Elements are : \n");
        for(i=top2;i>=0;i--){
        printf("%d\n",stack2[i]);
        }
    }
}
void pop1(){
    if(top1==-1){

        printf("Stack-1 Underflow");
    }
    else{
        int val = stack1[top1];
        top1--;
        printf("Element %d remove from stack",val);
    }
}
void pop2(){
    if(top2==-1){

        printf("Stack-2 Underflow");
    }
    else{
        int val = stack2[top2];
        top2--;
        printf("Element %d remove from stack",val);
    }
}
void peek1(){
    if(top1==-1)
    printf("Stack-1 is Empty");
    else{
        int val=stack1[top1];
         printf("%d",val);
    }
}
void peek2(){
    if(top2==-1)
    printf("Stack-1 is Empty");
    else{
        int val=stack2[top2];
         printf("%d",val);
    }
}
int main()
{
   while(1){
    system("cls");
    printf("1 Push data in stack 1\n");
    printf("2 Push data in stack 2\n");
    printf("3 Pop data from stack 1\n");
    printf("4 Pop data from stack 2\n");
    printf("5 Peek data from stack 1\n");
    printf("6 Peek data from stack 2\n");
    printf("7 Show data of stack 1\n");
    printf("8 Show data of stack 2\n");
    printf("9 Exit\n");
    int choice;
    printf("Enter choice");
    scanf("%d\n",&choice);
    switch(choice)
    {
        case 1:
        push1();
        break;
        case 2:
       push2();
         break;
        case 3:
        pop1();
         break;
        case 4:
        pop2();
         break;
        case 5:
        peek1();
          case 6:
        peek2();
         case 7:
        show1();
         case 8:
        show2();
         case 9:
        exit(0);
         break;
         default:
         printf("Invalid Choice\n");
         break;
    }
    printf("\n\n");
    system("pause");
   }
   return 0;
}