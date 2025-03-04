#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    /*
        0 --> snake
        1 --> water
        2 --> gun
    */
    while (1)
    {
        printf("\n\n(0-->snake) (1-->water) (2-->gun): ");
        scanf("%d", &player);
        // printf("coputer choosed: %d\n", computer);
        if (player == 0)
        {
            printf("you chose the snake\n");
        }
        else if (player == 1)
        {
            printf("you chose the water\n");
        }
        else if (player == 2)
        {
            printf("you chose the gun\n");
        }
        
        if (computer == 0)
        {
            printf("The computer chose snake\n");
        }
        else if (computer == 1)
        {
            printf("The computer chose water\n");
        }
        else if (computer == 2)
        {
            printf("The computer chose gun\n");
        }

        if (player == 0 && computer == 0)
        {
            printf("draw!");
        }
        else if (player == 0 && computer == 1)
        {
            printf("won!");
        }
        else if (player == 0 && computer == 2)
        {
            printf("lose!");
        }
        else if (player == 1 && computer == 0)
        {
            printf("lose!");
        }
        else if (player == 1 && computer == 1)
        {
            printf("draw!");
        }
        else if (player == 1 && computer == 2)
        {
            printf("win!");
        }
        else if (player == 2 && computer == 0)
        {
            printf("won!");
        }
        else if (player == 2 && computer == 1)
        {
            printf("lose!");
        }
        else if (player == 2 && computer == 2)
        {
            printf("draw!");
        }
        else if (player == 7)
        {
            break;
        }
        else
        {
            printf("some error occured!");
        }
    }

    printf("game quited! by pressing 7! \n");

    return 0;
}