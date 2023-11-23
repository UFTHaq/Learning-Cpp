#include <iostream>
#include <vector>

class Shape {
private:
    // attributes common to all shapes
public:
    virtual void draw() = 0;        // pure virtual function
    virtual void rotate() = 0;      // pure virtual function
    virtual ~Shape() {
        std::cout << "Destructor Shape" << std::endl;
    }
};

class Open_Shape: public Shape {        // Abstract class
public:
    virtual ~Open_Shape() {
        std::cout << "Destructor Open Shape" << std::endl;
    }
};

class Closed_Shape: public Shape {      // Abstract class
public:
    virtual ~Closed_Shape() {
        std::cout << "Destructor Closed Shape" << std::endl;
    }
};

class Line: public Open_Shape {         // Concrete class
public:
    virtual void draw() override {
        std::cout << "Drawing a Line" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a Line" << std::endl;
    }
    virtual ~Line() {
        std::cout << "Destructor Line" << std::endl;
    }
};

class Circle: public Closed_Shape {     // Concrete class
public:
    virtual void draw() override {
        std::cout << "Drawing a Circle" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a Circle" << std::endl;
    }
    virtual ~Circle() {
        std::cout << "Destructor Circle" << std::endl;
    }
};

class Square: public Closed_Shape {     // Concrete class
public:
    virtual void draw() override {
        std::cout << "Drawing a Square" << std::endl;
    }
    virtual void rotate() override {
        std::cout << "Rotating a Square" << std::endl;
    }
    virtual ~Square() {
        std::cout << "Destructor Square" << std::endl;
    }
};

void screen_refresh(const std::vector<Shape *> &shapes) {
    std::cout << "Refreshing" << std::endl;
    for (const auto ptr: shapes) {
        ptr->draw();
    }
}

int main() {
    std::cout << std::endl;

    // Shape s;                         // Error, tidak bisa instantiate
    // Shape *ptr_s = new Shape();      // tidak bisa buat object dari class abstract

    Line garis;
    garis.draw();
    garis.rotate();
    std::cout << std::endl;

    Shape *ptr_garis = new Line();
    ptr_garis->draw();
    ptr_garis->rotate();
    delete ptr_garis;

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape *> ptr_shapes {s1, s2, s3};

    for (auto ptr: ptr_shapes) {
        std::cout << std::endl;
        ptr->draw();
        ptr->rotate();
    }

    std::cout << std::endl;

    screen_refresh(ptr_shapes);

    delete s1;
    delete s2;
    delete s3;

    std::cout << std::endl;
    return 0;
}

