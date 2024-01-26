#include <stdio.h>
int main(){
    int multi[10];
    int n;
    printf("enter the number for multiplication table=");
    scanf("%d", &n);
    for(int i=1; i<=n;i++){
    multi[i]= n* i;
    printf("%d\n", multi[i]);
    }
return 0;
}