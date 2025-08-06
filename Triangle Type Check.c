#include<stdio.h>
int main()
{
    float S1,S2,S3;
    printf("Enter Sides of a Triangle");
    scanf("%f%f%f",&S1,&S2,&S3);
    if (S1==S2 && S2==S3 && S1==S3)
    {
        printf("The Triangle is Equilateral");
    }
    else if (S1==S2 || S2==S3 || S1==S3)
    {
        printf("The Triangle is Isosceles");
    }
    else if (S1!=S2 && S2!=S3 && S1!=S3)
    {
        printf("The Triangle is Scalene");
    }
    return 0;
}