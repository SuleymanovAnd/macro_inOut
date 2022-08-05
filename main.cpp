#include <iostream>
#define ANNOUNCEMENT "Enter the number of the day of the week: "
#define MONDAY (1)
#define TUESDAY (2)
#define WEDNESDAY (3)
#define THURSDAY (4)
#define FRIDAY (5)
#define SATURDAY (6)
#define SUNDAY (7)
#define DEFAULT "There is no day of the week with this number"
#define DAYN (d ,n) d ## _ ## n // не работает
#define DAY_D1 "Monday is the Day with this number"
#define DAY_D2 "Tuesday is the Day with this number"
#define DAY_D3 "Wednesday is the Day with this number"
#define DAY_D4 "Thursday is the Day with this number"
#define DAY_D5 "Friday is the Day with this number"
#define DAY_D6 "Saturday is the Day with this number"
#define DAY_D7 "Sunday is the Day with this number"


int main() {
    std::cout << ANNOUNCEMENT;
    int day;
    std::cin >> day;

    switch (day){
        case MONDAY :    std::cout << /*DAYN (DAY,D1)*/  DAY_D1 << std::endl; break; // DAYN выдает ошибки
        case TUESDAY :   std::cout << /*DAYN (DAY,D2)*/  DAY_D2  << std::endl; break; // Use of undeclared identifier 'd'
        case WEDNESDAY : std::cout << /*DAYN (DAY,D3)*/  DAY_D3 << std::endl; break; // Use of undeclared identifier 'n'
        case THURSDAY :  std::cout << /*DAYN (DAY,D4)*/  DAY_D4<< std::endl; break;
        case FRIDAY :    std::cout << /*DAYN (DAY,D5)*/  DAY_D5<< std::endl; break;
        case SATURDAY :  std::cout << /*DAYN (DAY,D6)*/  DAY_D6<< std::endl; break;
        case SUNDAY :    std::cout << /*DAYN (DAY,D7)*/  DAY_D7<< std::endl; break;
        default : std::cout << DEFAULT << std::endl;
    }
}
