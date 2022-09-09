/*
Marks in Maths>=65 and Marks in Phy>=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total 
in Maths and Physics >=140 */
#include <stdio.h>
int main()
{
    float phy , maths,chem, total3,total2;
    printf("\nEnter the marks in maths : ");
    scanf("%f",&maths);
    printf("\nEnter the marks in phy : ");
    scanf("%f",&phy);
    printf("\nEnter the marks in chem : ");
    scanf("%f",&chem);
    total3=maths+chem+phy;
    total2=maths+phy;
    if (maths>=65 && phy>=55 && chem>=50 && (total3>=190 || total2>=140))
    {
        printf("\nEligible for the professional course\n");
    }
    else
    {
        printf("\n not Eligible for the professional course\n");
    }
}