//
//  created by ravinsky rodion
//

//  implementation of interface.h functions

#include "interface.h"
#include <ctype.h>
#include <stdio.h>

int count_day_in_month(int year, int month) {
  int check_year;
  if(year % 400 == 0 || year % 4 == 0 && year % 100 )
  {
    check_year = 1;
  }
  else
  {
    check_year = 0;
  }
  if(month == 2 && check_year == 1)
    return 29;
  else if(month == 2 && check_year == 0)
    return 28;
  else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    return 31;
  else 
    return 30;
  
}


