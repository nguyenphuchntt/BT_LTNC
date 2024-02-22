#include <bits/stdc++.h>

void drawStar(int n){
    for (int i = 0; i < n; i++){
        std::cout << "*";
    }
}

void drawSpace(int n){
    for (int i = 0; i < n; i++){
        std::cout << " ";
    }
}

void draw1(int x){
    
    for (int i = 1; i <= x; i++){
        drawSpace(i);
        drawStar(x-i);
        std::cout << std::endl;
    }
}

void draw2(int x){
    int j = 1;
    for (int i = 1; i <= x; i++){
        drawSpace(x - i);
        drawStar(j);
        j+=2;
        std::cout << std::endl;
    }
}

void draw3(int x){
    int j = 0;
    for (int i = 5; i >= 1; i--){
        drawSpace(j++);
        drawStar(i*2 - 1);
        std::cout << std::endl;
    }
}

int main(){
    draw3(5);
    return 0;
}