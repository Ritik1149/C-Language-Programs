
//Stack Using linked list

#include <stdio.h>
#include <stdlib.h>

struct nodeDesign
{
    int data;
    struct nodeDesign *next;
};

struct nodeDesign *head=NULL, *node, *ptr;

int top=-1;

void push(int size)
{
    if(top==size-1)
    {
        printf("\nOverflow...");
        return;
    }
    node=(struct nodeDesign*)malloc(sizeof(struct nodeDesign));
   
    node->next=head;
    head=node;
    printf("\nEnter the element: ");
    scanf("%d",&(node->data));
    top++;
    printf("\n%d inserted successfully.",node->data);
}

void pop()
{
    if(top==-1)
    {
        printf("\nUnderflow...");
        return;
    }
    ptr=head;
    head=ptr->next;
    printf("\n%d deleted successfully.",ptr->data);
    free(ptr);
    top--;
}

void isFull(int size)
{
    if(top==size-1)
    {
        printf("\nStack is Full.");
    }
    else
    {
        printf("\nStack is not Full.");
    }
}
void isEmpty()
{
    if(top==-1)
    {
        printf("\nStack is Empty.");
    }
    else
    {
        printf("\nStack is not Empty.");
    }
}

void printStack(int size)
{
    int i;
    if(top==-1)
    {
        i=0;
        while(i<size)
        {
        	printf("\n-");
        	i++;
        }
    }
    else
    {
        i=size-1;
        while(i>top)
        {
            printf("\n-");
            i--;
        }
        ptr=head;
        while(ptr->next!=NULL)
        {
            printf("\n%d",ptr->data);
            ptr=ptr->next;
        }
        printf("\n%d",ptr->data);
    }
}

void peek()
{
	if(top==-1) printf("\nNil");
	else
	{
		printf("\nTop= %d",(*head).data);
	}
}

int main()
{
    int size,choice;
    printf("Enter the  size of stack: ");
    scanf("%d", &size);

    printf("\nMenu:\n\t1.Push\n\t2.Pop\n\t3.Check if full\n\t4.Check if empty\n\t5.Print Stack\n\t6.Peek\n\t7.Exit");
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                push(size);
                break;
            case 2:
                pop();
                break;
            case 3:
                isFull(size);
                break;
            case 4:
                isEmpty();
                break;
            case 5:
                printStack(size);
                break;
            case 6:
            	peek();
            	break;
            case 7:
                exit(0);
        }
    }
    return 0;
}

