// Tìm lặp. Viết chương trình nhập một số nguyên dương N <= 10000 và một chuỗi gồm N số trong khoảng từ 1 đến N, xác định xem trong chuỗi đó hai số nào bằng nhau hay không. Nếu có thì in ra “Yes”, nếu không thì in ra “No”.

#include <bits/stdc++.h>
#include <string>

#define maxN 10000

bool isSymmetric(std::string s){
    for (int i = 0; i < s.length()/2; i++){
        if (!(s[i] == s[s.length()-i-1])){
            return false;
        }
    }
    return true;
}

int solve(const int a, const int b){
    int cnt = 0;
    for (int i = a; i <= b; i++){
        std::string tmp = std::to_string(i);
        if (isSymmetric(tmp)){
            cnt++;
        }
    }
    return cnt;
}


int main(){
    int q;
    std::cin >> q;

    int a, b;
    while (q--){
        std::cin >> a >> b;
        std::cout << solve(a, b) << std::endl;
    }

    return 0;
}