#include <stdio.h>
#define MAX 50

int i,j;
int arrCreation(int arr[])
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    for(i=0;i<size; i++)
    {
	printf("\nEnter element %d : ",i+1);
	scanf("%d",&arr[i]);
    }
    printf("\nArray created: ");
    return size;
}
void arrPrinting(int arr[], int size)
{
    printf("\nArray is: [  ");
    for(i=0;i<size;i++)
    {
	printf("%d  ",arr[i]);
    }
    printf("]");
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubbleSort(int arr[],int size)
{
    for(i=0;i<size-1;i++)
    {
	for(j=0;j<size-i-1;j++)
	{
	    if(arr[j]>arr[j+1])
	    {
		swap(&arr[j],&arr[j+1]);
	    }
	}
    }
}

void selectionSort(int arr[], int size)
{
    int max;
    for(i=0;i<size-1;i++)
    {
	max=i;
	for(j=i+1;j<size;j++)
	{
	    if(arr[max]<arr[j])
	    {
		max=j;
	    }
	}
        if(arr[i]!=arr[max])
	swap(&arr[max],&arr[i]);
    }
}

void insertionSort(int arr[],int size)
{
    int key;
    for(i=1;i<size;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>-1 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[MAX],size;
    size=arrCreation(arr);
    arrPrinting(arr, size);

    printf("\nSorting using Bubble Sort (ascending order)\n");
    bubbleSort(arr, size);
    arrPrinting(arr,size);

    printf("\nSorting using Selection Sort (descending order)\n");
    selectionSort(arr,size);
    arrPrinting(arr,size);
    printf("\nSorting using Insertion Sort (ascending order)\n");
    insertionSort(arr,size);
    arrPrinting(arr,size);
    


    printf("\nDone :)");
    
    return 0;
}
