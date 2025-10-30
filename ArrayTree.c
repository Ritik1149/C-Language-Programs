#include <stdio.h>
#include <stdlib.h>
#define Max 50

int tree[Max];

void treeCreation()
{

    printf("%d",sizeof(tree)/sizeof(tree[0]));
    
}

int main()
{
    int choice;
    printf("Menu:\n\t1.Insertion\n\t2.Deletion\n\t3.Traversal\n\t4.Exit");
    while(1)
    {
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                treeCreation();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                exit(0);
            default:
                printf("\nUmm...What?");
        }
    }
    return 0;
}
