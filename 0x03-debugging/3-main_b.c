#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
	int month;
	int day;
	int year;

	month = 2;  // February
	day = 29;   // Leap year date
	year = 2000; // Leap year

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day, 1); // Pass 1 indicating 

	print_remaining_days(month, day, year);

	return (0);
}
