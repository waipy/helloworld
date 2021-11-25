#include "DateClass.h"
#include <iostream>

Date::Date(int dd, int mm , int yy)
{
    d = dd ? dd : default_date.d;
    m = mm ? mm : default_date.m;
    y = yy ? yy : default_date.y;

}

void Date::set_default(int dd, int mm, int yy)
{
    Date::default_date = Date(dd,mm,yy);
}

void Date::print(){
    std::cout << y << "-" << m << "-"<< d << "\n";
}