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
    
    printf ("\t\tThe calculator\n\n");
    
    printf("Insert two numbers\n");
    scanf("%lf %lf", &firstNum, &secondNum);
    
    printf("Choose an operation: \n +\n -\n /\n *\n");
    scanf("   %c", &operation);
    
    endRes = 0;
    
    if (operation == '+') {
        
        endRes = firstNum + secondNum;
        printf ("The result: %.1lf\n", endRes);
    }
    else if(operation == '-') {
        
        endRes = firstNum - secondNum;
        printf ("The result: %.1lf\n", endRes);
    }
    else if(operation == '*') {
        
        endRes = firstNum * secondNum;
        printf ("The result: %.1lf\n", endRes);
    }
    else if(operation == '/') {
        
        endRes = firstNum / secondNum;
        printf ("The result: %.1lf\n", endRes);
    }
    else printf("Choose an operation out of list\n");
    
    return 0;
    
}
