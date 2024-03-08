#include <iostream>
#include <ctime>
#include <algorithm>
#include <bits/stdc++.h>

void swap(int &x, int &y){
    int* tmp = new int;
    *tmp = x;
    x = y;
    y = *tmp;
    delete tmp;// clear
    tmp = NULL;
}

void bubbleSort(int arr[], int n = 30){
    for (int i = 0; i < n; i++){
        int temp = arr[i];
        for (int j = i + 1; j < n; j++){
            if (arr[j] < temp){
                temp = arr[j];
            }
        }
        swap(temp, arr[i]);
    }
}

int main(){
    srand(time(NULL));

    int arr[30];
    for (int i = 0; i < 30; i++){
        arr[i] = rand();
    }

    bubbleSort(arr, 30);

    for (int i = 0; i < 30; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}