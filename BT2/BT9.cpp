#include <bits/stdc++.h>

using namespace std;

int main(){
    double F, C, K;

    std::cin >> F;
    C = (F-32)*5/9;
    K = C + 273.15;

    std::cout << "Fahrenheit" << setw(12) << setfill(' ') << "Celsius" << setw(20) << setfill(' ') << "Absolute Value" << std::endl;
    std::cout << setw(4) << setfill(' ') << F << setw(19) << setfill(' ') << C << setw(15) << setfill(' ') << K;

    return 0;
}