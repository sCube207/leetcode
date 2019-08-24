#include <stdio.h>
#include <stdlib.h>

int dayOfYear(char * date);

int		main(int argc, char **argv) 
{
	int i = 1;

    while (i < argc) 
    {
        printf("%d\n", dayOfYear(argv[i]));
        i++;
    }
    return 0;
}

int dayOfYear(char *date) {
    int year;
    int day;
    int month;
    int dayNumber = 0;

//reading date in xxxx-xx-xx format
    year = atoi(date);
    date += 5;
    month = atoi(date);
    date += 3;
    day = atoi(date); 
    
    for (int i = 0; i < month - 1; i++) {
        if ((i % 2 == 0 && i < 7)
                || (i % 2 == 1 && i >= 7))
            dayNumber += 31;
        else if (i == 1)
            dayNumber += 28;
        else
            dayNumber += 30;
    }
    if (month > 2 && year % 100 != 0 && (year % 4 == 0
                || year % 400 == 0))
        dayNumber += 1;
    dayNumber += day;
    return dayNumber;
}
