//Accept a number from user and display its reverse number using Recursive Function
#include<stdio.h>
#include<conio.h>

void Reverse_No(int);

int main()
{
    int No=0;

    printf("\n Enter a Number:");
    scanf("%d",&No);

    printf("\n Reverse Number of %d =  ",No);

    Reverse_No(No);

    getch();
    return 0;
}

void Reverse_No(int Num)
{
    static int Rev=0;

    if(Num>0)
    {
        Rev= Num%10;
        printf("%d",Rev);
        Reverse_No(Num/10);

    }

}
