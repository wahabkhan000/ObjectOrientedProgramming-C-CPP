#include "Date.h"
#include <iostream>
#include <string>
Date::Date(int Day = 1,int Month = 1,int Year = 1){
    if(Day < 1){
        std::cout<<"Invalid Input! in Days\n";
    }
    else{
        day = Day;
    }
    if(Month < 1 || Month > 12){
        std::cout<<"Invalid Input! in Month\n";
    }
    else{
        month = Month;
    }
    if(Year < 1){
        std::cout<<"Invalid Input! in Year\n";
    }
    else{
        year = Year;
    }
}
Date::Date(const Date &obj){
    day = obj.day;
    month = obj.month;
    year = obj.year;
}
void Date::incrementDay(){
    if(month == 2){
        if(year % 4 == 0 || year % 400 == 0){
            if(day == 29){
                day = 0;
                month++;
            }
        }
        else{
            if(day == 28){
                day = 0;
                month++;
            }
        }
    }
    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        if(day == 31){
            day = 0;
            if(month == 12){
                month = 0;
                year++;
            }
            month++;
        }
    }
    else{
        if(day == 30){
            day = 0;
            month++;
        }
    }
    day++;
}
void Date::print() const{
    std::cout<<day<<"-"<<month<<"-"<<year<<"\n";
}
void Date::printLong() const{
    std::cout<<calander[month-1]<<" "<<day<<", "<<year<<"\n";
}
