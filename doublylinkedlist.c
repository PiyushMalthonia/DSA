#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *head = NULL, *tail = NULL;
struct Node* createNode()
{
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data : ");
    scanf("%d",&t->data);
    t->prev = NULL;
    t->next = NULL;
    return t;
}
void createDoublyLinkedList()
{
    int n, i;
    printf("Enter No. of Nodes : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        struct Node *newNode = createNode();
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }
}
void insertNodeInBeg()
{
    struct Node *newNode = createNode();
    if(head==NULL)
    {
        head=tail=newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void insertNodeInEnd()
{
    struct Node *newNode = createNode();
    if(head==NULL)
    {
        head=tail=newNode;
    }
    else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}
void insertNodeAtAnyPos()
{
    if(head==NULL)
    {
        printf("List is empty !!!\n");
    }
    else
    {
        int pos;
        printf("Enter Position : ");
        scanf("%d",&pos);
        if(pos==1)
        {
            struct Node *newNode = createNode();
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        else
        {
            int cnt=1;
            struct Node *temp = head;
            while(temp!=NULL)
            {
                if(cnt==pos)
                {
                    break;
                }
                cnt++;
                temp = temp->next;
            }
            if(temp==NULL)
            {
                printf("Invalid Position !!!!\n");
            }
            else
            {
                struct Node *newNode = createNode();
                temp->prev->next = newNode;
                newNode->prev = temp->prev;
                temp->prev = newNode;
                newNode->next = temp;
            }
        }
    }
}
void deleteNodeFromAnyPos()
{
    if(head==NULL)
    {
        printf("List is empty !!!!\n");
    }
    else
    {
        int pos;
        printf("Enter Position : ");
        scanf("%d",&pos);
        if(pos==1)
        {
            head = head->next;
        }
        else
        {
            int cnt=1;
            struct Node *temp = head;
            while(temp!=NULL)
            {
                if(cnt==pos)
                {
                    break;
                }
                cnt++;
                temp = temp->next;
            }
            if(temp==NULL)
            {
                printf("Invalid Position !!!\n");
            }
            else
            {
                temp->prev->next = temp->next;
                if(temp->next!=NULL)
                {
                    temp->next->prev = temp->prev;
                }
            }
        }
    }
}
void displayListFromBeg()
{
    if(head==NULL)
    {
        printf("List is empty !!!\n");
    }
    else
    {
        struct Node *temp = head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
}
void displayListFromEnd()
{
    if(tail==NULL)
    {
        printf("List is empty !!!\n");
    }
    else
    {
        struct Node *temp = tail;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp = temp->prev;
        }
    }
}  
int main()
{
    createDoublyLinkedList();
    while(1)
    {
        system("cls");
        printf("1. Insert Node In Begining\n");
        printf("2. Insert Node In End\n");
        printf("3. Insert Node At Any Position\n");
        printf("4. Delete Node From Given Position\n");
        printf("5. Search Node In List\n");
        printf("6. Display List from Beg\n");
        printf("7. Display List from End\n");
        printf("8. Exit\n");
        int choice;
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insertNodeInBeg();
            break;
            case 2:
            insertNodeInEnd();
            break;
            case 3:
            insertNodeAtAnyPos();
            break;
            case 4:
            deleteNodeFromAnyPos();
            break;
            case 5:
            break;
            case 6:
            displayListFromBeg();
            break;
            case 7:
            displayListFromEnd();
            break;
            case 8:
            exit(0);
            break;
            default:
            break;
        }
        printf("\n\n");
        system("pause");
    }
    return 0;
}