#include <stdio.h>
#include <math.h>
int main() 
{
    float number, result;
    printf("Enter a number: ");
    scanf("%f", &number);
    if (number < 0)
    {
      printf("Error: Square root of a negative number is not defined.\n");
    } 
    else
    {
       result = sqrt(number);
       printf("Square root of %f is %f\n", number, result);
    }

    return 0;
}