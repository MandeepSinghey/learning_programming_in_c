#include <stdio.h>

struct time
{
  int hour;
  int minutes;
  int seconds;
};

int main(void)
{
  //declare a function
  struct time timeupdate(struct time now);
  //create a car crossing
  struct time car_crossings[5] = {
      {11, 59, 59},
      {12, 0, 0},
      {1, 29, 59},
      {23, 59, 59},
      {19, 27, 27}};
  int i;
  for (i = 0; i < 5; ++i)
  {
    printf("Time is now %.2i:%.2i:%.2i \n", car_crossings[i].hour, car_crossings[i].minutes, car_crossings[i].seconds);
    car_crossings[i] = timeupdate(car_crossings[i]);
    printf("Time one second later %.2i:%.2i:%.2i \n", car_crossings[i].hour, car_crossings[i].minutes, car_crossings[i].seconds);
  }

  return 0;
}

struct time timeupdate(struct time now)
{
  //now is the incoming call in function
  ++now.seconds;
  //seconds reached 60
  if (now.seconds == 60)
  {
    now.seconds = 0;
    //change the minute
    ++now.minutes;
    // check if it is next hour
    if (now.minutes == 60)
    {
      now.minutes = 0;
      ++now.hour;
      if (now.hour == 24)
      {
        now.hour = 0;
      }
    }
  }
  return now;
}
