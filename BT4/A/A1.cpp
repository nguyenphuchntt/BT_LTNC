#include <bits/stdc++.h>

void print(int arr[], int len){
    for (int i = 0; i < len; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int a[10];
int b[5] = {1, 2, 3, 4};
// int b[3] = {1, 2, 3, 4};
int c[] = {1, 2, 3, 4}; //1 2 3 4 763658416 

int main(){

    int A[10];
    int B[5] = {1, 2, 3, 4};
    // int B[3] = {1, 2, 3, 4};
    int C[] = {1, 2, 3, 4}; // 1 2 3 4 1 2 3 4 
    print(C, 8);

    return 0;
}