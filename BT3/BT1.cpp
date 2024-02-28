#include <iostream>

struct point{
    int x;
    int y;

    point(int x, int y){
        this->x = x;
        this->y = y;
    }

    void add(point other){
        x = other.x + x;
        y = other.y + y;
    }

    void print(){
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};
void triple(point& A){
    A.x *= 3;
    A.y *= 3;
}
void tripleVer2(point A){
    A.x *= 3;
    A.y *= 3;   
}

int main(){
    point A = point(2,3);
    tripleVer2(A);
    A.print();

    triple(A);
    A.print();
    
    return 0;
}