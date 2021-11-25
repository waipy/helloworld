#include <iostream>
#include "Date.h"

void init_date(Date& d, int date,int month,int year){
    d.d = date;
    d.m = month;
    d.y = year;
}

void printDate(Date& d){
    std::cout << "Date is : " << d.y << "-" << d.m << "-" << d.d << "\n";   
}