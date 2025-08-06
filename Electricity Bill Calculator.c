#include<stdio.h>
int main()
{
    float Unit;
    float Bill;
    float SurCharge;
    float Amount;
    printf("Enter the Units Consumed :");
    scanf("%f",&Unit);
    if (Unit <= 50)
    {
        Bill = Unit*0.50;
        printf("The Bill is %f\n",Bill);
    }
    else if (Unit <= 150)
    {
        Bill = Unit*0.75;
        printf("The Bill is %f\n",Bill);
    }
    else if (Unit <= 250)
    {
        Bill = Unit*1.20;
        printf("The Bill is %f\n",Bill);
    }
    else if (Unit > 250 )
    {
        Bill = Unit*1.50;
        printf("The Bill is %f\n",Bill);
    }
    SurCharge = 0.2*Bill;
    Amount = Bill+SurCharge;
    printf("The Amount Payable is %f\n",Amount);
    return 0;
}