#include <stdio.h>

int main(){
    int num[100],i,j,n,great;
    printf("How many numbers do you want to enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
            great=num[i];
        for(j=0;j<i;j++){
            if(great<num[j]){
                great=num[j];
            }
        }
    }
    printf("The greatest number among them is: %d\n",great);
    return 0;
}