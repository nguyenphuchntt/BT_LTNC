#include <iostream>
#include <string>
#include <intrin.h>

struct point{
    int a, b;

    point(int x, int y){
        a = x;
        b = y;
    }

    void print(){
        std::cout << "(" << a << ", " << b << ")" << std::endl;
    }
};

void printLocation(const point sample){
    std::cout << &sample;
}

struct String{
    int length;
    char* str;

    String (const char* s) {
        length = strlen(s);
        str = new char[length+1];
        strcpy(str, s); // copy s to str
    }

    void print(){
        std::cout << str << std::endl;
    }

    void append(const char* other){
        int len = strlen(other);
        char* newStr = new char[length+len+1];
        for (int i = 0; i < length; i++){
            newStr[i] = str[i];
        }// strcpy
        for (int i = 0; i < len; i++){
            newStr[length+i] = other[i];
        }//strcat => CONCATENATE
        newStr[len+length] = '\0';
        delete[] str;
        str = newStr;
        delete[] newStr;        
        newStr = nullptr;
    }

    ~String(){ 
        delete[] str;        
        str = nullptr;
    }
};

int main(){

    point sample = point(2, 3);
    std::cout << &sample << " " << &(sample.a) << " " << &(sample.b) << std::endl;
    //0x5249bff978 0x5249bff978 0x5249bff97c

    std::cout << &(sample) << " ";
    printLocation(sample);
    std::cout << std::endl;
    //0x87a75ffd68 0x87a75ffd40

    String s = String("hello");
    s.print();

    s.append(", there");
    s.print();

    return 0;
}


