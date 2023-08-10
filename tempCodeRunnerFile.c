#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int score = 100;
    srand(time(NULL));

    int playAgain = 1;
    while (playAgain == 1) {
        printf("Do you want to play game (1=play, -1=exit) :\n");
        scanf("%d", &playAgain);

        if (playAgain == -1) {
            printf("Goodbye!\n");
            break;
        }

        int winningNumber = rand() % 100 + 1;
        printf("(Score=%d)\n", score);

        int guess;
        int attempts = 0;
        while (1) {
            printf("Guess the winning number (1-100) :\n");
            scanf("%d", &guess);
            attempts++;

            if (guess > winningNumber) {
                printf("Sorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score - attempts * 10);
            } else if (guess < winningNumber) {
                printf("Sorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score - attempts * 10);
            } else {
                printf("That is correct! The winning number is %d.\n", winningNumber);
                score -= attempts * 10;
                printf("Score this game: %d\n", score);
                break;
            }
        }
    }

    return 0;
}