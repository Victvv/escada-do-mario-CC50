#include <stdio.h>

int main(void)
{
    int height;
    printf("Enter a number between 1 and 8: ");
    scanf("%d", &height);

    if (height < 1 || height > 8)
    {
        printf("Invalid number!\n");
        return 1;
    }

    for (int i = 1; i <= height; i++)
    {
        for (int space = 0; space < height - i; space++)
        {
            printf(" ");
        }

        for (int hash = 0; hash < i; hash++)
        {
            printf("#");
        }

        printf("  ");

        for (int hash = 0; hash < i; hash++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
