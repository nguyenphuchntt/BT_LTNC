#include <bits/stdc++.h>

void printMagicArray(int N){
    std::vector<std::vector<int>> magicArray(N, std::vector<int>(N, 0));

    int num = 1;
    int i = 0;
    int j = N / 2;

    while (num <= N * N){
        magicArray[i][j] = num;

        int new_i = (i-1+N) % N; // cong N de tranh so am
        int new_j = (j+1) % N;

        if (magicArray[new_i][new_j] != 0){
            new_i = (i+1) % N;
            new_j = j;
        }

        i = new_i;
        j = new_j;
        
        num++;
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            std::cout <<  magicArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

}

int main(){
    printMagicArray(5);
    return 0;
}