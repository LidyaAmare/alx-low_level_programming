#include <stdio.h>
#include "main.h"

/**
*print_remaininig_days - takess a date prints how many days are left in the year, taking leap years into account
*@month: day of month
*@year: year
*Return: void
*/

void print_remaininig_days(int month, int day, int year)
{
if ((year % 400 == 0) || year % 4 == 0 && year % 100 != 0))
{
if (month >= 3 && day >= 60)
{
day++;
}

printf("day of the year: %d\n", day);
printf("Remaininig_days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
}
prnitf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Days of the year: %d\n", day);
printf("Remaininig_days: %d\n", 365 - day);

}
