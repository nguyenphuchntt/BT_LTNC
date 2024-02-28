#include <iostream>

struct point{
    double x;
    double y;

    point(double x, double y){
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

point midPoint(const point& A, const point& B){
    return point((A.x+B.x)/2, (A.y+B.y)/2);
}

int main(){
    point A = point(3, 4);
    point B = point(5, 6);
    point M = midPoint(A, B);
    

    M.print();
    return 0;
}