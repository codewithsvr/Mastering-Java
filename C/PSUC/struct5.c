// time + 45 days problem 

#include <stdio.h>
#include <time.h>

struct Date {
    int day;
    int month;
    int year;
};

void printDate(struct Date d)
{
    printf("%02d-%02d-%04d\n", d.day, d.month, d.year);
}

struct Date addDays(struct Date d, int daysToAdd)
{
    struct tm timeStruct = {0};

    timeStruct.tm_mday = d.day;
    timeStruct.tm_mon  = d.month - 1; 
    timeStruct.tm_year = d.year - 1900;

    timeStruct.tm_mday += daysToAdd;

    mktime(&timeStruct);

    struct Date newDate;
    newDate.day   = timeStruct.tm_mday;
    newDate.month = timeStruct.tm_mon + 1;
    newDate.year  = timeStruct.tm_year + 1900;

    return newDate;
}

int main()
{
    time_t t = time(NULL);
    struct tm current = *localtime(&t);

    struct Date currentDate;
    currentDate.day   = current.tm_mday;
    currentDate.month = current.tm_mon + 1;
    currentDate.year  = current.tm_year + 1900;

    printf("Current Date: ");
    printDate(currentDate);

    struct Date futureDate = addDays(currentDate, 45);

    printf("Date after 45 days: ");
    printDate(futureDate);

    return 0;
}
