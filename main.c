#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a, b, s;
    printf("Enter 2 Number for Summation : ");
    scanf("%d%d", &a, &b);

    s=summation(a,b);

    printf("Your Summation Result is = %d",s);


    getch();
    return 0;
}


int summation(int num1, int num2)
{
    int result;
    result = num1+num2;
    return result;
}
