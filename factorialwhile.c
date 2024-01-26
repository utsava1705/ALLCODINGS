#include <stdio.h>
int main(){
int i=1;
int n;
int f=1;
printf("ENTER THE NUMBER= ", n);
scanf("%d", &n);
while(i<=n){
    
    f=f*i;
     i++;
   

}printf("FACTORIAL=%d", f);
return 0;

}