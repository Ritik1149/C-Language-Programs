#include <stdio.h>
#include <stdlib.h>

void main()
{
	struct NodeDesign
	{
		int data;
		struct NodeDesign *next;
	};
	
	struct NodeDesign *node;
	
	printf("Menu:\n\t1.Insertion\n\t2.Deletion\n\t3.Printing\n\t4.Exit");
	while(1)
	{
		printf("\n\nEnter your choice: "):
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break
			case 4:
				exit(0);
			default:
				printf("\nInvalid input... Enter again:");
    }
  }
}
