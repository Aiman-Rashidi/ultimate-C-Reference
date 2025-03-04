#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, guess, attempts = 0;

    srand(time(0));
    randomNumber = rand() % 100 + 1;
    // printf("Random Number is %d\n", randomNumber);

    do
    {
        printf("Enter your Guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > randomNumber)
        {
            printf("Lower Number Please!\n");
        }
        else if (guess < randomNumber)
        {
            printf("Higher Number Please!\n");
        }
        else
        {
            printf("Guessed Correctly in %d Attempts!\n", attempts);
        }
    } while (guess != randomNumber);

    return 0;
}