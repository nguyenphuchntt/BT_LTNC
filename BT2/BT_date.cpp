#include <bits/stdc++.h>
#include <iomanip>

std::string addDaysToDate(std::string inputDate, int days){
    std::stringstream ss(inputDate);
    char dash;
    int day, month, year;
    ss >> day >> dash >> month >> dash >> year;

    int daysInMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    daysInMonth[2] = 29;

    day += days;
    while (day > daysInMonth[month]){
        day = day - daysInMonth[month];
        month++;

        if (month > 12){
            year++;
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                daysInMonth[2] = 29;
            }else{
                daysInMonth[2] = 28;
            }
        }
    }
    std::stringstream res;
    res << std::setw(2) << std::setfill('0') << day;
    res << std::setw(2) << std::setfill('0') << month;
    res << year;

    return res.str();


}


int main(){




    return 0;
}