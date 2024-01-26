#include <stdio.h>
int summultidivfact(int a, int b, int n ,int *sum , int *multi , int *div , int *fact ){
    *sum= a +b;
    *multi= a*b;
    *div= a/b;
    *fact =1;
    for(int i =1; i<=n; i++){
        *fact = *fact *i;
    }

}
int main(){
    int a, b, n , sum, multi , div , fact;
    printf("enter a =");
    scanf("%d", &a);
    printf("enter b=");
    scanf("%d", &b);
    printf("enter number for factorial ");
    scanf("%d", &n);
    summultidivfact(a,b,n,&sum , &multi , &div , &fact);
    printf("the sum =%d\n", sum);
    printf("the multiplication =%d\n", multi);
    printf("the div = %d\n", div); 
    printf("the factorial = %d", fact);
    return 0;


    return 0;

}