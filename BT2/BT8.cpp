#include <bits/stdc++.h>

void solve (double a, double b, double c){
    if (a == 0){
        if (b == 0){
            if (c != 0){
                std::cout << "vo nghiem";
                return;
            }
        }else{
            std::cout << -c/b;
            return;
        }
    }
    double delta = b*b - 4*a*c;
    if (delta > 0){
        std::cout << (sqrt(b*b - 4*a*c)-b)/2/a << " and " << (-sqrt(b*b - 4*a*c)-b)/2/a;
        return;
    }
    if (delta == 0){
        std::cout << -b/2/a;
        return;
    }

    std::cout << "(" << -b << "+ i*" << sqrt(-(b*b - 4*a*c)) << ") / " << 2*a << " and " << "(" << -b << "- i*" << sqrt(-(b*b - 4*a*c)) << ") / " << 2*a;
    
}

int main(){

    return 0;
}