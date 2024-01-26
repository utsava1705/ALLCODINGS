#include <stdio.h>
int main()
{
    int income;
    printf("ENTER YOUR INCOME IN LAC=", income);
    scanf("%d", &income);
    if(income>=250000 && income<=500000){
        printf("The tax paid is = %d",(income*5)/100);
    }
    else if(income>500000 && income<=1000000){
        printf("The tax paid is = %d",(income*20)/100);
    }
    else if(income>1000000){
        printf("The tax paid is = %d",(income*30)/100);
    }
    else{
        printf("NO TAX");
    }
    return 0;
}