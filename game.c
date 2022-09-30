#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess_num, nguesses=1;
    srand(time(0));
    number = rand()%100 + 1; // Generates a random number between 1 and 100
    // printf("The number is %d\n", number);
    // Keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess_num);
        if(guess_num>number){
            printf("Lower number please!\n");
        }
        else if(guess_num<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    }while(guess_num!=number);
    
    return 0;
}
