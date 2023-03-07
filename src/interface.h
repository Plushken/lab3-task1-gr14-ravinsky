//
// created by ravinsky rodion
//

#ifndef INTERFACE_H
#define INTERFACE_H

// calc_day_before function calculates and return the day before
// and calc_day_after function calculates and return the day after
// implementation is in server.c file

int count_day_in_month(int year, int month);

void calc_day_before(int year, int month, int day);

void calc_day_after(int year, int month, int day);



#endif
