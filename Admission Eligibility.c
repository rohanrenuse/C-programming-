#include<stdio.h>
int main()
{
    float Math;
    float Phy;
    float Chem;
    float MP;
    float Total;
    printf("Enter the marks scored in Maths :");
    scanf("%f",&Math);
    printf("Enter the marks scored in Physics :");
    scanf("%f",&Phy);
    printf("Enter the marks scored in Chemistry :");
    scanf("%f",&Chem);
    MP = Math + Phy;
    Total = Math + Phy + Chem;
    
    if (Math>=65 && Phy>=55 && Chem>=50 && MP>140 && Total>=190)
    {
        printf("You are Eligible for Admission in this College");
    }
    else
    {
        printf("Sorry!!, You are not Eligible for Admission");
    }
    return 0;
}