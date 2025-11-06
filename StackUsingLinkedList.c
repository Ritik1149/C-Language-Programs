#include <stdio.h>
#include <stdlib.h>

struct nodeDesign
{
    int data;
    struct nodeDesign *prev,*next;
};

struct nodeDesign *head=NULL,*node,*ptr;
int i;

void push(int size, int *top)
{
    if(*top==size-1)
    {
        printf("\nOverflow");
    }
    else
    {
        node=(struct nodeDesign*)malloc(sizeof(struct nodeDesign));
        if(*top==-1)
        {
            node->next=head;
            node->prev=head;
            head=node;
        }
        else
        {
            ptr=head;
            for(i=0;i<(*top);i++)
            {
                ptr=ptr->next;
            }
            node->next=ptr->next;
            node->prev=ptr;
            ptr->next=node;
        }
        *top=*top+1;
        printf("\nEnter the element: ");
        scanf("%d",&(node->data));
        printf("\n%d pushed successfully", node->data);
    }
}

void pop(int *top)
{
    if(*top==-1)
    {
        printf("\nUnderflow");
    }
    else
    {
        ptr=head;
        for(i=0;i<(*top);i++)
        {
            ptr=ptr->next;
        }
        printf("\n%d Deleted",ptr->data);
        (ptr->prev)->next=ptr->next;
        free(ptr);
        *top=*top-1;
    }
}

void peek(int top)
{
    if(top==-1)
    {
        printf("Stack is empty.");
    }
    else
    {
        ptr=head;
        for(i=0;i<top;i++)
        {
            ptr=ptr->next;
        }
        printf("\nTop Element = %d", ptr->data);
    }
}

void display(int top)
{
    printf("[");
    ptr=head;
    for(i=0;i<top;i++)
    {
        ptr=ptr->next;
    }
    for(i=top;i>=0;i--)
    {
        printf("\n%d",ptr->data);
        ptr=ptr->prev;
    }
    printf("\n]");
}

int main()
{
    int size,choice,top=-1;
    
    printf("Enter the size of stack: ");
    scanf("%d",&size);

    printf("\nStack Operations:\n\t1.Push\n\t2.Pop\n\t3.Peek\n\t4.Display\n\t5.Check if Full\n\t6.Check if Empty\n\t7.Exit");
    
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                push(size,&top);
                break;
            case 2:
                pop(&top);
                break;
            case 3:
                peek(top);
                break;
            case 4:
                display(top);
                break;
            case 5:
                if(top==size-1)
                {printf("\nStack is full");}
                else
                {printf("\nStack is not full");}
                break;
            case 6:
                if(top==-1)
                {printf("\nStack is empty");}
                else
                {printf("\nStack is not empty");}
                break;
            case 7:
                exit(0);
            default:
                printf("\nInvalid choice. Please check again");
        }
    }
    return 0;
}
