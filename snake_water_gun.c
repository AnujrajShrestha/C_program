#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(){
    int player,computer, rounds=0,maxscore=1000,score=0,penalty=50,wins=0,loss=0,tie=0;
    printf("You have 7 rounds\n");
    sleep(1);
    while (rounds!=7){
        printf("Enter your choice (1.Snake,2.Water,3.Gun): ");
        scanf("%d",&player);
        if(player==1){
            printf("Player: Snake\n");
            rounds++;
        }else if (player==2){
            printf("Player: Water\n");
            rounds++;
        }else if (player==3){
            printf("Player: Gun\n");
            rounds++;
        }else{
            printf("Invalid choice\n");
        }
        srand(time(0));
        int computer=(rand()%3)+1;
        if (computer==1){
            printf("Computer: Snake\n");
        }else if (computer==2){
            printf("Computer: Water\n");
        }else if (computer==3){
            printf("Computer: Gun\n");
        }
        sleep(1.4);
        printf("Ronud:%d\n",rounds);
        sleep(1.2);
        if ((computer==1 && player==2) ||(computer==2 && player==3) || (computer==3 && player==1)){
            printf("Computer wins\n");
            loss++;
            penalty+=20;
        }else if ((player==1 && computer==2) || (player==2 && computer==3) || (player==3 && computer==1)){
            printf("You win\n");
            wins++;
            penalty+=0;
        }else if ((computer==1 && player==1) || (computer==2 && player==2) || (computer==3 && player==3)){
            printf("Tie\n");
            penalty+=0;
            tie++;
        }
    }
    sleep(1);
    printf("You win %d times\n",wins);
    sleep(1);
    printf("You lose %d times\n",loss);
    sleep(1);
    printf("Game Tied %d times\n",tie);
    if (wins==7 && loss==0){
        printf("Score: %d\n",maxscore);
        sleep(1);
    }else if (wins==0 && loss==7){
        printf("Score: 0\n");
    }else{
        score=maxscore-(rounds*penalty);
        printf("Score: %d\n",score);
    }
    return 0;
}