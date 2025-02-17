#include <stdio.h>

int main(){
    int a[50],size,big;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    for (int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<size;i++){
        big=a[i];
        for (int j =0;j<i; j++){
            if (big<a[j]){
                big=a[j];
            }
        }
    }
    printf("The largest number in array is: %d\n",big);
    
    return 0;
}