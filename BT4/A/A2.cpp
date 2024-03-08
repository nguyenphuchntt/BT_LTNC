#include <bits/stdc++.h>

void print(char* s, int len){
    for (int i = 0; i < len; i++){
        std::cout << s[i] << " ";
    }
    std::cout << std::endl;
}

char s[3]; // ""
// char ss[4] = "abcd"; //initializer-string for 'char [4]' is too long
char ss[5] = "abcd"; //abcd
char sss[] = "abcd"; // abcd // 5 byte

int main(){

    char S[3]; // ""
    // char SS[4] = "abcd"; //initializer-string for 'char [4]' is too long
    char SS[5] = "abcd"; // abcd
    char SSS[] = "abcd";


    print(SSS, 7);
    std::cout << SSS << " " << sizeof(SSS);
    return 0;
}