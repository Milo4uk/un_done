//
//  kl.c
//  Me
//
//  Created by Mila ✨ on 19.10.2021.
//

#include <stdio.h>
#include <locale.h>


int main()
{
    int Age, DayOfBirth, MonthOfBirth, YearOfBirth, RelevantDay, RelevantMonth, RelevantYear;

    setlocale(0, "Rus");

    printf("Введите день рождения (день месяц год)\n");
    scanf_s("%d %d %d", &DayOfBirth, &MonthOfBirth, &YearOfBirth);

    printf("Введите сегодняшнюю дату (день месяц год)\n");
    scanf_s("%d %d %d", &RelevantDay, &RelevantMonth, &RelevantYear);

    Age = RelevantYear - YearOfBirth;

    if (Age % 10 == 0 || Age % 10 == 5 || Age % 10 == 6 || Age % 10 == 7 || Age % 10 == 8 || Age % 10 == 9) {

        printf("Ей %d лет\n", Age);
   }
    else if (Age % 10 == 1) {
        printf("Ей %d год\n", Age);
    }
    else if ((Age % 100) == 11 || (Age % 100) == 12 || (Age % 100) == 13 || (Age % 100) == 14) {
        printf("Ей %d лет\n", Age);
    }
    else  printf("Ей %d года\n", Age);

    getchar();
    getchar();

    return 0;
}
