#include <bits/stdc++.h>

std::map<int, std::string> numberMap = {
    {0, "zero"},
    {1, "one"},
    {2, "two"},
    {3, "three"},
    {4, "four"},
    {5, "five"},
    {6, "six"},
    {7, "seven"},
    {8, "eight"},
    {9, "nine"},
    {10, "ten"},
    {11, "eleven"},
    {12, "twelve"},
    {13, "thirteen"},
    {14, "fourteen"},
    {15, "fifteen"},
    {16, "sixteen"},
    {17, "seventeen"},
    {18, "eighteen"},
    {19, "nineteen"},
    {20, "twenty"},
    {30, "thirty"},
    {40, "forty"},
    {50, "fifty"},
    {60, "sixty"},
    {70, "seventy"},
    {80, "eighty"},
    {90, "ninety"},
    {100, "hundred"},
    {1000, "thousand"},
    {1000000, "million"}
};

std::string numberToEnglish(int n){
    std::string res = "";
    if (n == 0){
        res = numberMap[0];
        return res;
    }

    if (n < 0){
        res = "negative" + numberToEnglish(-n);
        return res;
    }

    if (n > 1000000){
        res = res + numberToEnglish(n / 1000000) + numberMap[1000000];
        n = n % 1000000;
        if (n != 0){
            if (n < 100){
                res += "and";
            }
            res += " ";
        }
    }
    if (n > 1000){
        res = res + numberToEnglish(n / 1000) + numberMap[1000];
        n = n % 1000;
        if (n != 0){
            if (n < 100){
                res += "and";
            }
            res += " ";
        }
    }

    if (n > 100){
        res = res + numberToEnglish(n / 100) + numberMap[100];
        n = n % 100;
        if (n != 0){
            res += " ";
        }
    }

    if (n >= 20){
        res = res + numberMap[(n/10)*10];
        n %= 10;
        if (n != 0){
            res += "-";
        }
    }

    if (n > 0){
        res = res + numberMap[n] + " ";
        
    }

    return res;



}

int main(){
    
    std::cout << numberToEnglish(1101891646);

    return 0;
}