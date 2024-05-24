#include<stdio.h>
int main()
{
    int i,n,j,sort[100],size,temp;
    printf("Enter the size of array ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&sort[i]);
    }
    for(i=0;i<size;i++)
    {
        int val=sort[i];
        for(j=i-1;j>=0 && sort[j]>val;j--)
        {
            sort[j+1]=sort[j];
        }
        sort[j+1]=
    }
}