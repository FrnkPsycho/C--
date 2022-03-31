#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int lid = n - 1;
        int up_layer = n / 2 - 1;
        int down_layer = n / 2 - 1;
        int up_sand = n - 5;

        //print top lid
        for (int i = 0; i < lid; i++)
            printf("-");
        printf("\n");

        //print a empty top layer
        printf("\\");
        for (int i = 0; i < lid - 2; i++)
            printf(" ");
        printf("/\n");

        int space = 1;
        for (int i = 0; i < up_layer - 1; i++)
        {
            for (int s = 0; s < space; s++)
                printf(" ");
            printf("\\");
            for (int j = 0; j < up_sand; j++)
            {
                printf("*");
            }
            up_sand -= 2;
            printf("/");
            for (int s = 0; s < space; s++)
                printf(" ");
            space++;
            printf("\n");
        }

        //print bottom layers
        space--;
        int inside_space = 0;
        for (int i = 0; i < down_layer; i++)
        {
            for (int s = 0; s < space; s++)
                printf(" ");
            printf("/");
            for (int j = 0; j < inside_space; j++)
            {
                printf(" ");
            }
            printf("*");
            for (int j = 0; j < inside_space; j++)
            {
                printf(" ");
            }
            printf("\\");
            for (int s = 0; s < space; s++)
                printf(" ");
            space--;
            inside_space++;
            printf("\n");
        }

        //print bottom lid
        for (int i = 0; i < lid; i++)
            printf("-");
        printf("\n\n");
    }

    return 0;
}