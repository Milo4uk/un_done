//
//  kl.c
//  Me
//
//  Created by Mila ✨ on 19.10.2021.
//

#include <stdio.h>


int main()
{
    int Age, DayOfBirth, MonthOfBirth, YearOfBirth, RelevantDay, RelevantMonth, RelevantYear;
      
      printf ("Insert date of birth (day month year)\n");
      scanf("%d %d %d", &DayOfBirth, &MonthOfBirth, &YearOfBirth);
      
      printf ("Insert date (day month year)\n");
      scanf("%d %d %d", &RelevantDay, &RelevantMonth, &RelevantYear);
      
    Age = RelevantYear - YearOfBirth;
    
    if (RelevantMonth > MonthOfBirth) {
        printf("Her age is: %d\n ", Age + 1); //how to?????
    }
    else if (RelevantDay > DayOfBirth && RelevantMonth == MonthOfBirth) {
        printf("Her age is: %d\n ", Age + 1);
    }
     else printf("Her age is: %d\n ", Age);
          
      getchar();
      getchar();
    
    return 0;
}
