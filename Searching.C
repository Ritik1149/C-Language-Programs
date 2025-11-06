#include <stdio.h>
#define MAX 50

int i, flag=0,size;

void arrCreation(int arr[],int size)
{
    for(i=0;i<size;i++)
    {
        printf("\nEnter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nArray created");
}

void linearSearch(int arr[],int item,int size)
{
    for(i=0;i<size;i++)
    {
        if(item==arr[i])
        {
            flag++;
            break;
        }
    }
}

void binarySearch(int arr[],int size, int item)
{
    int mid,left=0,right=size-1;
    
    
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]==item)
        {
            flag++;
            i=mid;
            break;
        }
        else if(arr[mid]<item)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
}
    
int main()
{
    int arr[MAX],element,choice;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    
    arrCreation(arr,size);
    
    printf("\nEnter the element to search: ");
    scanf("%d",&element);
    
    printf("\nChoose a method:\n\t1. Linear Search\n\t2. Binary Search\n\nEnter your choice: ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
            linearSearch(arr,element,size);
            break;
        case 2:
            binarySearch(arr,size,element);
            break;
        default:
            printf("\nInvalid Choice...");
            
    }
    if(choice==1 || choice==2)
    {
        if(flag==0)
        {
            printf("\nElement not found");
        }
        else
        {
            printf("\nElement found at index %d",i);
        }
    }
    return 0;}
