#include<stdio.h>
int main()
{
    int num1;
    printf("Enter a Number");
    scanf("%d",&num1);
    if (num1%5==0 && num1%11==0)
    {
        printf("The Number is Divisible by 5 and 11");
    }
    else
    {
        printf("The Number is not Divisible by 5 and 11");
    }
    
    return 0;
}