#include <iostream>
void printPascalTriangle(int n) {
    int coef = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j; // su dung kien thuc ve nhi thuc Newton
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;
    printPascalTriangle(n);

    return 0;
}
