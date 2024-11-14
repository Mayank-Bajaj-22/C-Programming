#include <stdio.h>
struct time{
  int hours;
  int minutes;
  int seconds;
} t;
  struct time *pt;
  pt = &t;
  return 0;
}


// t.seconds  [correct]
// (*pt).seconds  [correct]
// pt -> seconds  [correct]