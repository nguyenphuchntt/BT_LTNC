// Tìm lặp. Viết chương trình nhập một số nguyên dương N <= 10000 và một chuỗi gồm N số trong khoảng từ 1 đến N, xác định xem trong chuỗi đó hai số nào bằng nhau hay không. Nếu có thì in ra “Yes”, nếu không thì in ra “No”.

#include <bits/stdc++.h>

#define maxN 10000

bool solve(std::string s){
    for (int i = 0; i < s.length()/2; i++){
        if (!(s[i] == s[s.length()-i-1])){
            return false;
        }
    }
    return true;
}

int main(){
    std::string str = "abcqecba";

    if (solve(str)){
        std::cout << "YES";
        return 0;
    }
    std::cout << "NO";

    return 0;
}