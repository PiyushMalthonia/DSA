#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *left;
    int data;
    struct Node *right;
};
struct Node* createNode(int value)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter Tree Element : ");
    scanf("%d",&temp->data);
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
struct Node* insert(struct Node *root, int value)
{
    if(root == NULL)
    {
        return createNode(value);
    }
    else if(value < root->data)
    {
        root->left = insert(root->left,value);
    }
    else
    {
        root->right = insert(root->right,value);
    }                                            
    return root;
}
struct Node* preorder(struct Node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
struct Node* inorder(struct Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
struct Node* postorder(struct Node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
int search(struct Node *root, int val)
{
    static int flag=0;
    if(root!=NULL)
    {
        if(root->data==val)
        {
            flag=1;
        }
        else
        {
            search(root->left,val);
            search(root->right,val);
        }
    }
    return flag;
}
struct Node*deleteElement(struct Node *root, int key)
{
    if(root == NULL)
        return root;
    else if(key < root->data)
    {
        root->left = deleteElement(root->left,key);
        return root;
    }
    else
    {
        root->right = deleteElement(root->right,key);
        return root;
    }
    if(root->left == NULL)
    {
        return root->right;
    }
    else if(root->right == NULL)
    {
        return root->left;

        struct Node*x=root;
        struct Node*y=root->right;
    }
}
int main()
{
    struct Node*root=NULL;
    int val,value;
    while(1)
    {
        system("cls");
        printf("**********Binary Search Tree**********\n\n");
        printf("1. Insert Node In Binary Search Tree\n");
        printf("2. Pre-Order Traversal\n");
        printf("3. In-Order Traversal\n");
        printf("4. Post-Order Traversal\n");
        printf("5. Search Element In Binary Search Tree\n");
        printf("6. Delete Element from a Binary Search Tree\n");
        printf("7. Exit\n");
        int choice;
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the value : ");
            scanf("%d",&value);
            insert(root,value);
            break;
            case 2:
            preorder(root);
            break;
            case 3:
            inorder(root);
            break;
            case 4:
            postorder(root);
            break;
            case 5:
            printf("Enter the value to search : ");
            scanf("%d",&val);
            if(search(root,val)==1)
            {
                printf("Found !!!!\n");
            }
            else
            {
                printf("Not found !!!\n");
            }
            break;
            case 6:
            break;
            case 7:
            exit(0);
            break;
            default:
            printf("Invalid choice !!!!\n");
            break;
        }
        printf("\n\n");
        system("pause");
    }
    return 0;
}