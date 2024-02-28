#include <iostream>

struct point{
    double x;
    double y;

    point(double x, double y){
        this->x = x;
        this->y = y;
    }
    void add(const point& other){
        x = other.x + x;
        y = other.y + y;
    }
    void print(){
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

struct rectangle{
    const double x, y, w, h;

    rectangle(double x_, double y_, double w_, double h_) : x(x_), y(y_), w(w_), h(h_) {
    }

    bool contains(const point& A) const {
        return (A.x >= x && A.x <= (x + w) && A.y >= y && A.y <= (y+h));
    }
};



int main(){

    return 0;
}