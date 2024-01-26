#include <stdio.h>
int main(){
    int arr[3][10];
    int num;
    for(int i= 0; i<3; i++){
                         if(i==0){
                
                num=2;
            }
            if(i==1)
             num=7;
            if(i==2)
             num=9;


        for(int j=0; j<10; j++){

            arr[i][j]= num*(j+1);
            printf("%d    ", arr[i][j]);

                    
                    }
         printf("\n");
    }
    
        

return 0;
 }