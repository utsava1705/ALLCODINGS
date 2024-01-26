#include <stdio.h>
int main()
{
    int arr[2][3];
    for(int i ;i<2;i++){
        printf("enter the %d row = ", i+1);
        scanf("%d", &arr[i] );

        for(int i; i<3; i++){
            printf("enter the column= %d", i+1);
            scanf("%d", &i);

        }
    printf("%d      %d\n",arr [i]);
    }
}