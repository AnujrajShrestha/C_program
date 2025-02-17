#include <stdio.h>

int main(){
    int n,temp,rem,arm=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while (n>0){
        rem=n%10;
        arm+=rem*rem*rem;
        n/=10;
    }
    if (temp==arm){
        printf("%d is an armstrong\n",arm);
    }else{
        printf("%d is not an armstrong\n",temp);
        
    }
    return 0;
}