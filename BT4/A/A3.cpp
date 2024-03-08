#include <bits/stdc++.h>

void print(char** s, int len){
    for (int i = 0; i < len; i++){
        std::cout << s[i] << " ";
    }
    std::cout << std::endl;
}

int dayTab[][12] = {
  {31,28,31,30,31,31,3,30,31}, //deleted -> 0 0 0 0 0 0 0 0 ...
  {31,29,31,30,31,30,31,31,30,31,30,31}
}; // declaration of 'dayTab' as multidimensional array must have bounds for all dimensions except the first
// 31 28 31 30 31 30 31 31 30 31 30 31 
// 31 29 31 30 31 30 31 31 30 31 30 31


int daytab[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
}; 
// 31 28 31 30 31 30 31 31 30 31 30 31 
// 31 29 31 30 31 30 31 31 30 31 30 31


int main(){

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 12; j++){
            std::cout << dayTab[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}