#include <stdio.h>
int main(){
    int i=1;
    int m;
    int s;
    do{
    m=8*i;
    i++;
    s=s+m;
    }while(i<=10);
printf("the sum = %d", s);
return 0;
}