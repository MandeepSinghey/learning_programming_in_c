#include <stdio.h>

struct time {
  int hour;
  int minutes;
  int seconds;
};

int main(void) {
  //declare a function
  struct time timeupdate(struct time now);
  struct time car_crossings[5] = {
    {11,59,59},
    {12,0,0},
    {1,29,59},
    {23,59,59},
    {19,27,27}
  };
  return 0;
}