// #include <stdio.h>

// void reverse(char[], int n);

// void reverse(char st[], int n)
// {
//     char temp;
//     for (int i = 0; i < n / 2; i++)
//     {
//         temp = st[i];
//         st[i] = st[n - i - 2];
//         st[n - i - 2] = temp;
//     }
//     printf("%s\n", st);
// }

// int main()
// {
//     char st[] = "aiman";

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%c", st[i]);
//     }
//     printf("\n");

//     int totlaBytes = sizeof(st);
//     int elementSize = sizeof(st[0]);
//     int length = totlaBytes / elementSize;
//     printf("%d\n", length);

//     reverse(st, length);

//     // for (int i = 0; i < 5; i++)
//     // {
//     //     printf("%c", st[i]);
//     // }
//     // printf("\n");

//     return 0;
// }

// just take an example of int array and define how to reverse it
// how swapping formuls works in an array is defined if i paste this prompt in chatgpt

// #include <stdio.h>

// int main()
// {
//     char *ptr = "harry";
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%c\n", &ptr[i]);
//         printf("address: %u\n", &ptr[i]);
//         printf("ASCII value: %u\n", ptr[i]);
//         printf("\n");
//     }

//     return 0;
// }

// ---------------notes---------------
// gets()
// puts()

// strlen()
// strcpy()
// strcat()
// strcmp()

#include <stdio.h>

int main()
{
    char word[50]; // Declare a character array
    printf("Enter a word: ");
    scanf("%s", word); // Read user input

    printf("ASCII values of each character:\n");
    for (int i = 0; word[i] != '\0'; i++)
    {
        printf("Character: %c | ASCII: %d\n", word[i], word[i]);
    }

    return 0;
}




// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char st1[30];
//     char st2[30];

//     printf("enter 1st word: ");
//     scanf("%s", st1);
//     printf("enter 2nd word: ");
//     scanf("%s", st2);

//     int result = strcmp(st1, st2);

//     if (result == 0)
//     {
//         printf("Both words are same!\n");
//         printf("words are %s and %s", st1, st2);
//     }
//     else if (result > 0)
//     {
//         printf("%s and 1st and %s is 2nd\n", st2, st1);
//     }
//     else if (result < 0)
//     {
//         printf("%s and 1st and %s is 2nd\n", st1, st2);
//     }

//     return 0;
// }