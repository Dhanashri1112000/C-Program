//Factorial of Given Number Using - Recursion
#include<stdio.h>
#include<conio.h>

int Factorial(int);

int main()
{
    int No=0,Fact=0;

    printf("\n Enter a Number :");
    scanf("%d",&No);

    Fact = Factorial(No);

    printf("\n Factorial of Given Number %d is = %d",No,Fact);

    getch();
    return 0;
}

int Factorial(int Num)
{
    static int Res = 1;

    if(Num>=2)
    {
        Res = Factorial(Num-1);
    }

    return Res*Num;
}
