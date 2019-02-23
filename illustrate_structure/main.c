#include <stdio.h>

int main()
{
	//create a struct for date
	struct date
	{
		int month;
		int day;
		int year;
	};

	//create a date
	struct date today;

	//Assign value to date
	today.month = 02;
	today.day = 22;
	today.year = 2019;

	int century = 0;
	century = today.year / 100 + 1;

	printf("Today date is %d/%d/%d \n", today.month, today.day, today.year);
	printf("Century is %dst\n", century);
}
