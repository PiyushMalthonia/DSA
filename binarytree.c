#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node*left;
    int data;
    struct Node*right;
};
struct Node*createNode()
{
 struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
 printf("Enter data ");
 scanf("%d",&temp->data);
 temp-> left=temp->right=NULL;
 return temp;
}
void insertNodeinLeft(struct Node*parent)
{
  parent->left=createNode();
}
void insertNodeinRight(struct Node*parent)
{
  parent->right=createNode();
}
struct Node*preorder(struct Node*root)
{
  if(root!=NULL)
  {
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);
  }
}
struct Node*inorder(struct Node*root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
  }
}
struct Node*postorder(struct Node*root)
{
  if(root!=NULL)
  {
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
  }
}
struct Node*search(struct Node*root,int value)
{
  if(root!=NULL)
  {
    if(root->data==value)
    {
    return 1;
    }
    else
    {
      search(root->left,value);
      search(root->right,value);
      return 0;
    }
  }
}
int main()
{
  struct Node*root=createNode();
  insertNodeinRight(root);
  insertNodeinLeft(root->right);
  insertNodeinLeft(root);
  insertNodeinRight(root->right->left);
  insertNodeinRight(root->left);
  printf("\nPreorder : ");
  preorder(root);
  printf("\nInorder : ");
  inorder(root);
  printf("\nPostorder : ");
  postorder(root);
  int val;
  printf("\nEnter searching element ");
  scanf("%d",val);
  if(search(root,val)==1)
  {
    printf("Found !!!\n");
  }
  else
  {
    printf("Not Found !!!\n");
  }
  return 0;
}