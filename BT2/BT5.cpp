#include <bits/stdc++.h>

int main(){
    int temp = -1;
    while (true){
        int curr;
        std::cin >> curr;
        if (curr < 0){
            std::cout << curr;
            break;
        }

        if (curr == temp){
            continue;
        }

        std::cout << curr << " ";
        temp = curr;

    }


    return 0;
}