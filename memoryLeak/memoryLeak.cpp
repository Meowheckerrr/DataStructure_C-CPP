//Simple Betting Game
//jack queen king (computer shuffles these cards)
//player has to guess the position of queen
//if he wins, he takes 3*bet
//if he looses, he loose the bet amount
//player has $100 initially

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int cash =100;


void Play(int bet){
    // char C[3]={'J','Q','K'}; 

    //memoryLeak Testing 
    char *C = (char*)malloc(3*sizeof(char));
    *C='J';
    *(C+1)='Q';
    *(C+2)='K';

    printf("Shuffling\n");
    srand(time(NULL));
    int i;
    for(i=0;i<5;i++){

        //randent index 
        int x = rand() % 3;
        int y = rand() % 3;

        //swaps
        int temp =C[x];
        C[x]=C[y];
        C[y]=temp;

    }

    int playerGuess;
    printf("What's the position of queen 1,2 or 3?");
    scanf("%d",&playerGuess);

    if(C[playerGuess-1]=='Q'){
        cash += bet;
        printf("win , result =%c,%c,%c Cash Result=%d \n", C[1],C[2],C[3],cash);
    
    }
    else{
        cash -= bet;
        printf("loss , result =%c,%c,%c Cash Result=%d \n", C[1],C[2],C[3],cash);
    }
}


int main(){
    int bet;

    printf("welcome\n");
    printf("totoal cash =%d\n ",cash );

    while(cash > 0){


        
        printf("what's your bet $ \n");
        scanf("%d",&bet);
        if (bet == 0| bet>cash)break;
        Play(bet);
        printf("\n*************************************************\n");

    }
}