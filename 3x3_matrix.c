#include <stdio.h>

int main(){
    int matrix[3][3];
    for (int i = 0; i<=2; i++){
        printf("Enter the row of matrix:\n");
        for (int j = 0; j<=2; j++){
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i<=2; i++){
        for (int j = 0; j<=2; j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}