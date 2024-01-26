#include <stdio.h>
int main()
{
 int age;
 printf("Enter your age= " , age);
 scanf("%d", &age );
 if(age>=18 && age<=70){
    printf("The person can drive");
 }
 else
 {
    printf("you cannot drive");

 }
 return 0;
}