//Program for accept numbers from user as num1 and num2 and print (num1)^num2 using Recursion
#include<stdio.h>
#include<conio.h>

int Pow_Fun(int,int);

int main()
{
    int Num1=0,Num2=0,Power=0;

    printf("\n Enter Two Numbers to get (Num1)^(Num2):");
    scanf("%d%d",&Num1,&Num2);

    Power=Pow_Fun(Num1,Num2);

    printf("\n\n Power : (%d)^(%d)=%d",Num1,Num2,Power);

    getch();
    return 0;
}
int Pow_Fun(int No1,int No2)
{
    static int pow=1,temp=0;

    temp=No2;

    while(temp != 0)
    {
        pow =(No1*(Pow_Fun(No1,No2-1)));

    }

    return pow;
}
