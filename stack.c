#include<stdio.h>
#define SIZE 10
int stack[SIZE], top=-1;
int isEmpty(){
    // if(top==-1)
    // return 1;
    // else
    // return 0;
    retuen (top==-1) ? 1:0;
}
int isFull(){
    return (top==SIZE-1)? 1:0;
}
int push(){
    if(isFull)
    return 0;
    else{
        top++;
        int val;
        printf("Enter Value :");
        scanf("%d",&val);
        stack[top]=val;
        return 1;
    }
}
int main()
{

}