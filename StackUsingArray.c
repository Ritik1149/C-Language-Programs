#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void push(int arr[],int *top,int size)
{
    if(*top==size-1)
    {
        printf("\nStack is full");
    }
    else
    {
        *top=*top+1;
        printf("\nEnter the element: ");
        scanf("%d",&arr[*top]);
        printf("\nElement pushed successfully.");
    }
}

void pop(int arr[], int *top)
{
    if(*top==-1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nElement Deleted= %d",arr[*top]);
        *top=*top-1;
    }
}

void peek(int arr[],int top)
{
    if(top==-1)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nTop Element = %d",arr[top]);
    }
}

void display(int arr[],int top)
{
    int i;
    printf("[");
    for(i=top;i>=0;i--)
    {
        printf("\n%d",arr[i]);
    }
    printf("\n]");
}

int main()
{
    int arr[MAX], size, top=-1, choice;
    printf("Enter the size of Stack : ");
    scanf("%d",&size);

    printf("\nStack Operations:\n\t1.Push\n\t2.Pop\n\t3.Peek\n\t4.Display\n\t5.Check if Full\n\t6.Check if Empty\n\t7.Exit");
    
    while(1)
    {
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                push(arr,&top,size);
                break;
            case 2:
                pop(arr,&top);
                break;
            case 3:
                peek(arr,top);
                break;
            case 4:
                display(arr,top);
                break;
            case 5:
                if(top==size-1)
                    printf("\nStack is full");
                else
                    printf("\nStack is not full");
                break;
            case 6:
                if(top==-1)
                    printf("\nStack is empty");
                else
                    printf("\nStack is not empty");
                break;
            case 7:
                exit(0);
            default:
                printf("\nInvalid choice. Please check again");
        }
    }
    return 0;
}
