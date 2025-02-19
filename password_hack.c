#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int attemps=0,loop=1;
    char password[9],ans[9]="",ans2;
    char keys[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_-+=[]{}`~;:'\"<>,.?/";
    printf("Enter your password (at least 8 characters): ");
    scanf("%s",password);

    while (loop){
        memset(ans,0,sizeof(ans));
        for(int i=0;i<strlen(password);i++){
            for(int j=0;j<sizeof(keys)-1;j++){
                printf("Analysing the password: %s\n",ans);
                system("cls");
                attemps++;
                if(password[i]==keys[j]){
                ans[i]=keys[j];
                break;
                }
            }
        }
    ans[strlen(password)]='\0';
    if(strcmp(password,ans)==0){
        loop=0;
        printf("Your password is: %s\n",ans);
        printf("Attemps: %d",attemps);
        }
    }
    return 0;
}