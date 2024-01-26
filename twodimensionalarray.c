#include <stdio.h>
int main(){
    int student=3;
    int subject=5;
    int marks[3][5];
    for(int i=0; i<student; i++){
        for(int j=0; j<subject; j++){
            printf("enter the %d students marks in subject %d=", i+1, j+1);
            scanf("%d", &marks[i][j]);

        }
        for(int i=0; i<student; i++){
            for(int j=0; j<subject; j++){
                printf("the marks of the %d student in subject %d= %d\n", i+1  ,j+1,  marks[i][j]);
            }
        }
    }

    return 0;
}