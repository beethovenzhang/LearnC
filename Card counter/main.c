#include <stdio.h>
#include <stdlib.h>

int main()
{
    int decks;
    puts("Enter a number of decks:");
    scanf("%i", &decks);
    if (decks < 1) {
        puts("This is not a valid number of decks");
        return 1;
    }
    printf("There are %d cards/n", (decks * 52));
    return 0;
}
