//Accept a number from user and Display that number of Fibonacci Series
#include<stdio.h>
#include<conio.h>

int Fibonacci_Series(int);

int main()
{
    int n=0,cnt=0;

    printf("Enter Count for Fibonacci Series:");
    scanf("%d",&cnt);

    printf("\n Fibonacci Series is:\n");

    for(n=0;n<cnt;n++)
    {
        printf("\n%d\n",Fibonacci_Series(n));
    }


    getch();
    return 0;
}
int Fibonacci_Series(int num)
{
    static int sum=0;

    if(num==0 || num== 1)
    {
        return num;
    }

    else
    {
        sum=Fibonacci_Series(num-1)+Fibonacci_Series(num-2);

        return sum;
    }
}
