#include <iostream>
// #include "lib/Date.h"
#include "lib/Date2.h"
int main(int, char**) {
    std::cout << "Hello, world!\n";
    // Date birthday;
    // init_date(birthday,6,11,1983);
    // printDate(birthday);
    Date2::set_default(6,11,1983);
    Date2 today = Date2(25,11,2021);
    today.print();
}
