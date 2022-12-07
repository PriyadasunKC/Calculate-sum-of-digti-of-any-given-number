#include <stdio.h>
# include <math.h>
int digitSum();

int main()
{

    digitSum();
    return 0;
}

int digitSum()
{

    int number = 0;
    int digits = 0;
    int remain = 0;
    int cal = 0;

    printf("Enter number : ");
    scanf("%d", &number);
    digits = log10(number) + 1;
    for (int i = 0; i < digits; i++)
    {
        remain = number % 10;
        cal = cal + remain;
    }

    printf(" Sum of Digits : %d", cal);
}