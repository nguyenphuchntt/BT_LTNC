#include <bits/stdc++.h>


int main(){

    int n;
    // std::cin >> n;
    n = 10;

    int k = 0;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (j + k > n){
                std::cout << (j+k-n) << " ";
            }else{
                std::cout << (j + k) << " ";
            }
        }
        k++;
        std::cout << std::endl;
    }


    return 0;
}