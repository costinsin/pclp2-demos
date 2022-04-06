#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;

    printf("I need to make a potion, I know the ingredients, but I don't know "
           "the quantity of each ingredient. Help me prepare this and I will "
           "give you a reward!\n");
    printf("Oh, how many milliliters of Spider Eye juice should I add?\n");
    fscanf(stdin, "%d", &x);

    if ((x ^ 723) == 926) {
        printf("How many grams of Unicorn Snot should I add?\n");
        fscanf(stdin, "%d", &x);

        if ((x ^ 236) == 567) {
            printf("We are close, how many grams of Lizard Skin Powder is "
                   "necessary?\n");
            fscanf(stdin, "%d", &x);

            if ((x ^ 2309) == 3774) {
                printf("Sucess!\n");
                return 0;
            }
        }
    }

    printf("The potion exploded and killed us both :(\n");

    return 0;
}