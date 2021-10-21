//
//  main.c
//  Me
//
//  Created by Mila ✨ on 13.10.2021.
//

#include <stdio.h>

int main()
{
    int year;
    
    printf ("Введите год \n");
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf ("%d год является високосным\n", year);
    else
        printf ("%d год не является високосным \n", year);
    
    return 0;
}
