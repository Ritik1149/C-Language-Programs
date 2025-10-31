#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct nodeDesign{
        int data;
        struct nodeDesign *next;
    };

    struct nodeDesign *head,*node, *ptr;

    head=node;
    int choice,choiceIns,element,pos;

    printf("Menu\n\t1.Insert\n\t2.Delete\n\t3.Print\n\t4.Exit");
    while(1)
    {
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                node=(struct nodeDesign*)malloc(sizeof(struct nodeDesign));
                if(node==NULL)
                {
                    printf("\nMemory Allocation Failure...");
                    getch();
                    exit(1);
                }
                printf("\nMenu\n\t1.Insert at beginning\n\t2.Insert at end\n\t3.Insert at a location\n\nEnter your choice: ");
                scanf("%d",&choiceIns);
                switch(choiceIns)
                {
                    case 1:
                        node->next=head;
                        head=node;
                        printf("\nEnter the element to insert: ");
                        scanf("%d",&(node->data));
                        printf("%d inserted successfully!", node->data);
                    case 2:
                        ptr=head;
                        while(ptr->next!=NULL)
                        {
                            ptr=ptr->next;
                        }
                        node->next=ptr->next;
                        ptr->next=node;
                    case 3:
                        printf("\nEnter the position to insert at: ");
                        scanf("%d",&pos);
                        ptr=head;
                        
                }
        }
    }
}
