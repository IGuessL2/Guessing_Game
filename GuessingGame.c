#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CheckGuess(int SecretNum, int GuessNum) {
    return SecretNum == GuessNum; // return the value of 1 if Guess Number is Equal to Secret Number
}
int GuessRange(int SecretNum, int GuessNum) {
    return SecretNum < GuessNum; // return the value of 1 if Guess Number is larger tham Secret Number
}
int TryAgain (char Retry) {
    return Retry == 'y';
}
char RetryButton() {
    char Retry;
    do {
        printf("Do you want to retry? Answer with y for yes and n for no \n");
        scanf(" %c", &Retry);
    }
    while (Retry != 'y' && Retry != 'n'); // if user types other than y and n, above print statement will be reprinted to enter valid input.
    return Retry;
}
int main () {
    srand(time(NULL));
    char Retry = 'y';
    int GuessNum;
    while(TryAgain(Retry)) {
        printf("Try to guess a number between 1 and 1000 : \n");
        int SecretNum = rand() % 1000 + 1; // randomly generating number 1-1000
        int  GuessCount = 0;

        while (1) {
            printf("Your guesses : \n");
            scanf("%d", &GuessNum);
            if (GuessNum < 1 || GuessNum > 1000) {
                printf ("%d is an invalid Guess.\n", GuessNum);
                continue; // Invalid guesses won't be counted.
            }
            GuessCount++;
            if (CheckGuess(SecretNum, GuessNum)) {
                printf("Congratulations!You did it!🎉🎊!\n");
                printf("It only took %d %s!\n", GuessCount, GuessCount == 1 ? "guess" : "guesses");
                break;
            }
            else {
                if (GuessRange(SecretNum, GuessNum)) {
                    printf("Try to Guess Lower!!\n");
                }
                else {
                    printf("Try to Guess Higher!!\n");
                }
            }
        }
        Retry = RetryButton(); //User can replay when they finished a game
    }
    printf("Thanks for playing🎈");
    return 0;
}
