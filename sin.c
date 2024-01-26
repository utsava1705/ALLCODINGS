#include <stdio.h>
#include <math.h>
int main(){
    float n;
    printf("enter x=");
    scanf("%f", &n);
    float a;
    float s;
    printf("Enter the number tillit will go =");
    scanf("%f", &a);
    int factorial=1;
    int i;

    for(int i=0; i<=a;i=i+2){
        int b;
        factorial = factorial * i;
        s = ((pow(n,i)))/(factorial);
        
printf("%f", s);


    }
   

 return 0;
    }
