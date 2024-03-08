// Bảng xoắn ốc. Viết chương trình nhận input từ bàn phím gồm một cặp số x, y nguyên dương nhỏ hơn 10 và in ra màn hình một bảng x dòng y cột chứa các giá trị từ 1 đến x*y theo dạng xoắn ốc. Ví dụ
// Sample Input
// Sample Output
// 4 5
// 1   2  3  4  5
// 14 15 16 17  6
// 13 20 19 18  7
// 12 11 10  9  8
#include <bits/stdc++.h>

#define LEFT 0
#define RIGHT 1
#define X 2
#define Y 3

int main(){
    int x_dim = RIGHT;
    int y_dim = RIGHT;
    int turn = X;
    int j(0), i(0);
    int x, y;
    std::cin >> x >> y;
    
    int res = x*y; int curr = 1;
    int arr[x][y];
    for (int m = 0; m < x; m++){
        for (int n = 0; n < y; n++){
            arr[m][n] = 0;
        }
    }
    while (curr <= res){
        arr[i][j] = curr++;
        if (turn == X){
            if (x_dim == RIGHT){
                if ((j+1 == y) || (arr[i][j+1] != 0)){
                    turn = Y;
                    i++;
                    x_dim = LEFT;
                }else{
                    j++;
                }
            }else{
                if ((j-1 == -1) || (arr[i][j-1] != 0)){
                    turn = Y;
                    i--;
                    x_dim = RIGHT;
                }else{
                    j--;
                }
            }
        }else{
            if (y_dim == RIGHT){
                if ((i+1 == x) || (arr[i+1][j] != 0)){
                    turn = X;
                    j--;
                    y_dim = LEFT;
                }else{
                    i++;
                }
            }else{
                if ((i-1 == -1) || (arr[i-1][j] != 0)){
                    turn = X;
                    j++;
                    y_dim = RIGHT;
                }else{
                    i--;
                }
            }
        }
    }


    for (int m = 0; m < x; m++){
        for (int n = 0; n < y; n++){
            std::cout << arr[m][n] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}