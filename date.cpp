#include <iostream>
// #include "lib/Date.h"
#include "lib/DateClass.h"
int main(int, char**) {
    std::cout << "Hello, world!\n";
    // Date birthday;
    // init_date(birthday,6,11,1983);
    // printDate(birthday);
    Date::set_default(6,11,1983);
    Date today = Date(25,11,2021);
    today.print();
}
