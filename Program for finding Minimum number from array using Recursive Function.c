//Program for accept array elements from user and find Minimum number by using Recursion
#include<stdio.h>
#include<conio.h>
#define Arr_Size 3

int Accept_Elements(int[]);
int Min_Element(int[]);

int main()
{
    int array[Arr_Size];

    Accept_Elements(array);

    getch();
    return 0;

}
int Accept_Elements(int array[])
{
    int i=0,Min=0;

    printf("Enter Array Elements:\n");

    for(i=0;i<Arr_Size;i++)
    {

        printf("\n Element %d = ",i+1);
        scanf("%d",&array[i]);
    }

    Min= Min_Element(array);

    printf("\n=============================================================================\n");
    printf("\n\n Minimum Number From Given Array is = %d",Min);
}

int Min_Element(int array[])
{
    static int i=0;
    int Min=array[0];

    if(i<Arr_Size)
    {
        for(i=1;i<Arr_Size;i++)
        {

            if(array[i]<Min)
            {
                Min=array[i];
                i++;
            }

        }

        Min_Element(array);
    }
    return Min;
}

