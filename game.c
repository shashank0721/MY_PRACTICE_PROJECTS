#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char name[50];
    int comp=0,user=0;
    printf("Enter your name : ");
    gets(name);
    printf("\n\nHELLO %s!! Let's start the game of Stone Paper Scissors(ROUND OF 3)!!!\n\n\n",name);
    
    for(int i=0;i<3;i++)
    {
        char turn[10];
        srand(time(NULL));
        int n;
        printf("\nROUND %d choose stone or paper or scissors :: ",i+1);
        gets(turn);
        printf("\nComputer's turn :: Computer chooses : ");
        n=rand()%3;
        if(n==0)
            {
                printf("stone\n");
                if(strcmp(turn,"stone")==0)
                    printf("ITS A DRAW\n");
                if(strcmp(turn,"paper")==0)
                        user++;
                if(strcmp(turn,"scissors")==0)
                        comp++;
            }
        if(n==1)
            {
                printf("paper\n");
                if(strcmp(turn,"paper")==0)
                    printf("ITS A DRAW\n");
                if(strcmp(turn,"stone")==0)
                        comp++;
                if(strcmp(turn,"scissors")==0)
                        user++;
            }
        if(n==2)
             {
                printf("scissors\n");
                if(strcmp(turn,"scissors")==0)
                    printf("ITS A DRAW\n");
                if(strcmp(turn,"stone")==0)
                        user++;
                if(strcmp(turn,"paper")==0)
                        comp++;
            }
            printf("\nCURRENT SCORE - USER : %d   COMPUTER : %d\n\n\n\n",user,comp);
        
    }
    if(user>comp)
        printf("\n%s IS THE WINNER WITH SCORE %d-%d",name,user,comp);
    if(user<comp)
        printf("\nCOMPUTER IS THE WINNER WITH SCORE %d-%d",comp,user);
    else
        printf("\nTHE MATCH IS A DRAW");

}