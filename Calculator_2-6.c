//
//  Calculator_2.c
//  Me
//
//  Created by Mila ✨ on 15.10.2021.
//

#include <stdio.h>

int main()
{

    double firstNum, secondNum, endRes;
    char operation;

    printf("\t\tThe calculator\n\n");

    printf("Insert two numbers\n");
    scanf_s("%lf %lf", &firstNum, &secondNum);
    getchar();

    printf("Choose an operation: \n +\n -\n /\n *\n");
    scanf_s("%c", &operation, 1);

    endRes = 0;

    if (operation == '+') {

        endRes = firstNum + secondNum;
        printf("The result: %.1lf\n", endRes);
    }
    else if (operation == '-') {

        endRes = firstNum - secondNum;
        printf("The result: %.1lf\n", endRes);
    }
    else if (operation == '*') {

        endRes = firstNum * secondNum;
        printf("The result: %.1lf\n", endRes);
    }
    else if (operation == '/') {

        endRes = firstNum / secondNum;
        printf("The result: %.1lf\n", endRes);
    }
    else printf("Choose an operation out of list\n");

    getchar();
    getchar();

    return 0;

}
