#include <stdio.h>
#include <stdbool.h>

//create a struct for date
struct date
{
	int month;
	int day;
	int year;
};

// declare leap year function
bool check_leap_year(struct date d);

int main()
{


	//declare array days per month
	int days_per_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 30, 30, 31, 30, 31};

	//create a date
	struct date today;
	struct date tomorrow;



	//User input a date
	printf("Enter a date mm/dd/yyyy \n");
	scanf("%d/%d/%d", &today.month, &today.day, &today.year);

	int century = 0;
	century = today.year / 100 + 1;

	printf("Today date is %d/%d/%d \n", today.month, today.day, today.year);
	printf("Century is %dst\n", century);

	bool leap_year = check_leap_year(today);
	printf("leap year flag %d", leap_year);
	if (today.day != days_per_month[today.month] || leap_year == true) { //normal processing
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	} else if (today.month == 12) { // end of year
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	} else { // end of month
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	printf("Tomorrow date is %d/%d/%d \n", tomorrow.month, tomorrow.day, tomorrow.year);



}

bool check_leap_year(struct date d)
{
	bool leap_year;
	// If a year is evenly divisible by 4, but it is not evenly divisible 100, then it is a leap year.
	// Check if the number is evenly divisible by 400 to confirm a leap year
	/*
	For example, 1900 is evenly divisible by 100, but not 400 since it gives you a result of 4.75. This means that 1900 is not a leap year.
	On the other hand, 2000 is evenly divisible by 100 and 400, since it gives you a result of 5. That means that the year 2000 is a leap year.
	s*/
	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
	{
		leap_year = true;

	} else
	{
		leap_year = false;
	}
	return leap_year;
}
