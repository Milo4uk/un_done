#include <stdio.h>

int ui()
{
    int box_X, box_Y,box_Z, brick_X, brick_Y, brick_Z;

    printf("Insert the parameters of the box (lenght widht height)\n");
    scanf_s("%d %d %d", &box_X, &box_Y, &box_Z);

    printf("Insert the parameteres of the brick (lenght widht height)\n");
    scanf_s("%d %d %d", &brick_X, &brick_Y, &brick_Z);

    if (brick_X <= box_X && brick_Y <= box_Y && brick_Z <= box_Z) {
        printf("The brick can fit in the box!");
    }
    else printf("The brick is too big to fit in the box :( \n");

    getchar();
    getchar();

    return 0;
}