#include <stdio.h>

int main()
{
    int month, day = 0;
    int daysofmonth[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totaldays = 0;
    int i = 0, j = 0;
    while (scanf("%d", &month) != EOF)
    {
        scanf("%d", &day);
        totaldays = 0;
        if (month == 12 && day == 24)
            printf("E vespera de natal!\n");
        else if (month == 12 && day == 25)
            printf("E natal!\n");
        else if (month == 12 && day > 25)
            printf("Ja passou!\n");
        else
        {
            totaldays = daysofmonth[month] - day;
            for (i = month + 1; i < 12; i++)
            {
                if (i < 12) totaldays += daysofmonth[i];
            }
            totaldays += 24;
            printf("Faltam %d dias para o natal!\n", totaldays+1);
        }
    }
}