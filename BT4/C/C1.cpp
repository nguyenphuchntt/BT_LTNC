// Tìm lặp. Viết chương trình nhập một số nguyên dương N <= 10000 và một chuỗi gồm N số trong khoảng từ 1 đến N, xác định xem trong chuỗi đó hai số nào bằng nhau hay không. Nếu có thì in ra “Yes”, nếu không thì in ra “No”.

#include <bits/stdc++.h>

#define maxN 10000

bool check[maxN];

bool exist(int* num, int n){
    for (int i = 0; i < n; i++){
        if (check[num[i]]){
            return true;
        }else{
            check[num[i]] = true;
        }
    }
    return false;
}

int main(){
    int n = 6;
    int ptr[n] = {1, 0, 3, 6, 2, 9};

    if (exist(ptr, n)){
        std::cout << "YES";
        return 0;
    }
    std::cout << "NO";

    return 0;
}