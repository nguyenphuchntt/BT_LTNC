#include <bits/stdc++.h>


int main(){

    int s[5] = {1, 2, 3, 4, 5};
    // std::cout << s[-1]; // 32758 - gia tri rac
    // std::cout << s[5]; // 736 - gia tri rac
    // std::cout << s[4]; // 5
    // s[6] = 1; // 1
    std::cout << s[6];

    int arr[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 6; j++){
            arr[i][j] = 99;
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 6; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
// 99 99 99 99 99 99 
// 99 99 99 99 99 99 
// 99 99 99 99 99 99

    return 0;
}