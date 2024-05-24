#include<stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = (low-1);
    for(int j=low; j<high; j++)
    {
        if(array[j]<=pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    i++;
    swap(&array[i], &array[high]);
    return i;
}
void quickSort(int array[],int low,int high)
{
    if(low<high)
    {
     int pi=patrition(array,low,high);
     quichSort(array,low,pi-1);
     quickSort(array,pi+1,high);
    }
}
int main()
{
    int n,i;
    printf("Enter size : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quuickSort(arr,0,n-1);
    printf("Sorted array in descendoing order : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
                                                       