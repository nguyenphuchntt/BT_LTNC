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
    double x, y, w, h;

    rectangle(){}
    rectangle(double x_, double y_, double w_, double h_) : x(x_), y(y_), w(w_), h(h_) {
    }

    void Copy(const rectangle& other){
        this->x = other.x;
        this->y = other.y;
        this->w = other.w;
        this->h = other.h;       
    }

    bool contains(const point& A) const {
        return (A.x >= x && A.x <= (x + w) && A.y >= y && A.y <= (y+h));
    }
};

// Ship. Viết một struct Ship là kiểu dữ liệu đại diện cho một con tầu (ship). Mỗi ship có một biến thành viên là một Rect để ghi tọa độ và kích thước của tầu, một biến thành viên id kiểu string là số hiệu của tầu. Ngoài ra còn có thêm dx và dy là vận tốc hiện hành của tầu theo trục x và trục y. Viết hàm move() của Ship với nhiệm vụ thay đổi vị trí của tầu theo vận tốc hiện hành (x += dx, y+= dy). Viết hàm display(const Ship& ship) là hàm độc lập bên ngoài với nhiệm vụ hiển thị số hiệu và tọa độ của tầu.

struct ship {
    std::string id;
    rectangle Rect;
    double dx, dy;

    ship(std::string id_, const rectangle& Rect_, double dx_, double dy_){
        Rect.Copy(Rect_);
        id = id_;
        dx = dx_;
        dy = dy_;
    }

    void move(){
        Rect.x += dx;
        Rect.y += dy;
    }
};

void display(const ship& sample){
    std::cout << "id: " << sample.id << std::endl;
    std::cout << "postition: " << sample.Rect.x << ", " << sample.Rect.y << std::endl;
}

int main(){

    rectangle a = rectangle(1, 1, 1, 1);
    ship b = ship("Hello world", a, 10, 10);
    b.move();

    display(b);

    return 0;
}