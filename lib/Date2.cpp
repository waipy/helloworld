#include "Date2.h"
#include <iostream>


Date2::Date2(int dd, int mm , int yy)
{
    d = dd ? dd : default_date.d;
    m = mm ? mm : default_date.m;
    y = yy ? yy : default_date.y;

}
Date2 Date2::default_date(16,12,1770);
void Date2::set_default(int dd, int mm, int yy)
{
   default_date = Date2(dd,mm,yy);
}

void Date2::print(){
    std::cout << y << "-" << m << "-"<< d << "\n";
}