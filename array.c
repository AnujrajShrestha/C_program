#include <stdio.h>

int main(){
    int arr[10],even=0,odd=0,n,even_arr[10],odd_arr[10];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even_arr[even++]=arr[i];
        }else{
            odd_arr[odd++]=arr[i];
        }
    }
    
    printf("Even array\n");
    for(int i=0;i<even;i++){
        printf("%d ",even_arr[i]);
    }
    printf("\nOdd array\n");
    for(int i=0;i<odd;i++){
        printf("%d ",odd_arr[i]);
    }
    return 0;
}