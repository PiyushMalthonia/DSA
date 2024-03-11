#include<stdio.h>
#include<stdlib.h>
#define maxsize 1000
int list[maxsize],size;
void create(){
    printf("Enter List Size : ");
    scanf("%d",&size);
    if(size>maxsize)
    printf("List Overflow !!!!");
    else{
        printf("Enetr Elements : \n");
        for(int i=0; i<size; i++){
            scanf("%d",&list[i]);
        }
        printf("List Created Successfully !!!!\n");
    }
}
void displaylist(){
    int i;
if(size==0)
printf("List Is Empty !!!!!\n");
else{
    printf("List Elements are : \n");
    for(i=0;i<size;i++)
    printf("%d\t",list[i]);
    printf("\n");
}
}
void Insert()
{
    if(size==0)
    {
    printf("List Is Empty !!!\n");
    }
    else
    {
    int pos,value,i;
    printf("Enter Position : ");
    scanf("%d",&pos);
    printf("Enter Value to Insert : ");
    scanf("%d",&value);
    if(pos>size)
    {
        printf("Invalid Position !!!\n");
    }
    else
    {
       for(i=size; i>=pos; i--)
       {
       list[i]=list[i-1];
       }
       list[pos-1]=value;
       size++;
       printf("Element Inserted Successfully !!!!\n");
    }
  }
}
void delete(){
    if(size==0)
    printf("List Is Empty !!!\n");
    else{
     int pos;
     printf("Enter Position :");
     scanf("%d",&pos);
     for(int i=pos-1; i<size; i++){
        list[1]=list[i+1];
     }
     size--;
     printf("Element Deleted Successfully !!!!\n");
  }
}
void search()
{
    if(size==0)
    printf("List is Empty !!!!\n");
    else{
        int val,i;
        printf("Enter Searching Value : ");
        scanf("%d",&val);                  
        for(i=0; i<size; i++){
            if(val==list[i]){
                break;
            }
        }
        if(i==size)
        printf("Element Not Found !!!!\n");
        else
            printf("Element Found !!!!\n");
    }
}
int main(){

    while(1){
        printf("1. Create List\n");
        printf("2. Insert Element On List\n");
        printf("3. Display List\n");
        printf("4. Delete Element From a List\n");
        printf("5. Search Element is List\n");
        printf("6. Exit\n");
        int choice;
        printf("\n\nEnter choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: 
            create();
            break;
            case 2:
            Insert();
            break;
            case 3:
            displaylist();
            break;
            case 4:
            break;                   
            case 5:
            search();
            break;
             exit(0);
            break;
            default:
            printf("Invalid Choice !!!!!\n");
        }
        printf("\n\n");
        system("pause");
        system("cls");
    }
}