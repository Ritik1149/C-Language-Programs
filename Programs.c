//Sorting techniques in C

//1. Bubble Sort
#include <stdio.h>

void b_sort(int a[],int n);

int main()
{
	int i,j,n,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("\nElement at index[%d] : ",i);
        scanf("%d",&a[i]);
	}
    b_sort(a,n);
    printf("\n\nThe sorted array is:\n");
    printf("[\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("]");
    return 0;
}

void b_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}


//2. Selection Sort
#include <stdio.h>

void s_sort(int a[],int n);

int main()
{
	int i,j,n,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("\nElement at index[%d] : ",i);
        scanf("%d",&a[i]);
	}
    s_sort(a,n);
    printf("\n\nThe sorted array is:\n");
    printf("[\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("]");
    return 0;
}

void s_sort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
    	min=i;
    	for(j=i+1;j<n;j++)
    	{
    		if(a[min]>a[j])
    		{
    			min=j;
    		}
    	}
    	if(min!=i)
    	{
    		temp=a[i];
    		a[i]=a[min];
    		a[min]=temp;
    	}
    }	
}

//3. Insertion Sort
#include <stdio.h>

void i_sort(int a[],int n);

int main()
{
	int i,j,n,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("\nElement at index[%d] : ",i);
        scanf("%d",&a[i]);
	}
    i_sort(a,n);
    printf("\n\nThe sorted array is:\n");
    printf("[\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("]");
    return 0;
}

void i_sort(int a[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}

