#include <stdio.h>
#include <stdbool.h>

//create a struct for date
struct time
{
	int hour;
	int minutes;
	int seconds;
};



int main()
{
	struct time current_time;


	//User input a time
	printf("Enter a Military time hh:mm:ss \n");
	scanf("%d:%d:%d",
	      &current_time.hour,
	      &current_time.minutes,
	      &current_time.seconds);



	printf("Current Military time is %d:%d:%d \n",
	       current_time.hour,
	       current_time.minutes,
	       current_time.seconds);



	++current_time.seconds;

	if (current_time.seconds == 60) {

		current_time.seconds = 0;
		++current_time.minutes;
		if (current_time.minutes == 60) {
			current_time.minutes = 0;
			++current_time.hour;
			if (current_time.hour == 24) {
				current_time.hour = 0;
			}
		}

	}
	printf("Now Military time is %d:%d:%d \n",
	       current_time.hour,
	       current_time.minutes,
	       current_time.seconds);

}

