//
//  created by ravinsky rodion
//

// client file
#include <stdlib.h>
#include "interface.h"
#include <stdio.h>

int main(int argc, char **argv) {
  if (argc != 4) {
    printf("Incorrect number of arguments!");
    return 1;
  }
  int year = atoi(argv[1]);
  int month = atoi(argv[2]);
  int day = atoi(argv[3]);
  if(month<1 || month > 12)
    {
    printf("incorrect data!");
      return 1;
    }
    if(day<1)
    {
    printf("incorrect data!");
      return 1;
    }
  else if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
  {
        printf("incorrect data!");
          return 1;
  }
  else if(month == 4 || month == 6 || month == 9 || month == 11 && day > 30)
  {
    printf("incorrect data!");
    return 1;
  }
else{
  int check_year;
  if(year % 400 == 0 || year % 4 == 0 && year % 100 )
  {
    check_year = 1;
  }
  else
  {
    check_year = 0;
  }
  if(check_year == 1 && day > 29 && month == 2)
  {
        printf("incorrect data!");
    return 1;
  }
  else if(check_year == 0 && day > 28 && month == 2)
  {
    printf("incorrect data!");
    return 1;
    }
  }
printf("Total day in %d %d month = %d days\n", year, month, count_day_in_month(year,month));

}