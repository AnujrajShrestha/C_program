#include <stdio.h>

int main(){
    int frist,second,result,time,choice;
    char enter;
    time=1;

    while (time!=0){
        printf("Enter the frist number: ");
        scanf("%d",&frist);
        printf("Enter the second number: ");
        scanf("%d",&second);
        printf("Enter your choiceb(1.+,2.-,3.*,4./): ");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                result=frist+second;
                printf("%d + %d = %d\n",frist,second,result);
                break;
                case 2:
                result=frist-second;
                printf("%d - %d = %d\n",frist,second,result);
                break;
                case 3:
                result=frist*second;
                printf("%d * %d = %d\n",frist,second,result);
                break;
                case 4:
                if(second!=0){
                    result=frist/second;
                printf("%d / %d = %d\n",frist,second,result);
                }else{
                    printf("Error:Division by zero is not possible\n");
                }
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
        printf("Do you want to restart the program(y/n): ");
        scanf(" %c",&enter);
        if (enter=='y' || enter=='Y'){
            time=1;
        }else{
            time=0;
        }
    }
    return 0;
}
