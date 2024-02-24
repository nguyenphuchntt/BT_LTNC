#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

long long calSalary(int hours){
    long long res = 0;
    if (hours > 200){
        res = res + (hours - 200)*25000 + 3000000;
        return res;
    }
    if (hours > 150){
        res = res + (hours - 150)*20000 + 2000000;
        return res;
    }

    if (hours > 100){
        res = res + (hours - 100)*16000 + 1200000;
        return res;
    }

    res = 12000 * hours;
    return res;

}

long long calIncomeTax(long long salary){
    long long insuranceTax = salary * 9 / 100;
    salary -= insuranceTax;
    long long incomeTax = 0;
    if (salary > 2000000){
        incomeTax = 125000 + ((salary - 2000000) * 2 /10);     
        return incomeTax;
    }
    if (salary > 1500000){
        incomeTax = 50000 + ((salary - 1500000) * 15 /100);
        return incomeTax;
    }
    if (salary > 1000000){
        incomeTax = ((salary - 1000000) /10);
        return incomeTax;
    }

    return incomeTax;

}

long long calDebt(long long money){
    for (int i = 0; i < 12; i++){
        double temp = money*1.0 * 0.02;
        temp = roundf(temp);
        money += temp;
        std::cout << money << std::endl;
    }
    return money;
}



int main(){



    return 0;
}