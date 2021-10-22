#include <stdio.h>

int main()
{
    int wall_X, wall_Y, brick_X, brick_Y;

    printf("Insert the parameteres of the hole in the wall (lenght height)\n");
    scanf_s("%d %d", &wall_X, &wall_Y);

    printf("Insert the parameteres of the brick (lenght height)\n");
    scanf_s("%d %d", &brick_X, &brick_Y);

    if (brick_X <= wall_X && brick_Y <= wall_Y) {
        printf("The brick can travel through the wall!");
    }
    else printf ("The brick is too big to travel through the wall :( \n");

    getchar();
    getchar();

    return 0;
}