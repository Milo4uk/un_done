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

   do { printf("Insert two numbers\n");
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
     
    printf("Stay in the menu?\n y\t n\n");
    scanf_s("%c", &menuDes, 1);

      } while (menuDes == 'y' && menuDes!= 'n');
    
    printf("Farewell\n");
  
    getchar();

    return 0;

}
