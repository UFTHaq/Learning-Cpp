#include <iostream>

using namespace std;

//  -- Function PROTOTYPES --  //
double calc_area_circle(double radius);
double cal_vol_cylinder(double radius, double height);
void area_circle();
void volume_cylinder();

int main() {
    cout << endl;

    area_circle();
    volume_cylinder();

    cout << endl;
}

const double pi {3.14159};

// function calculate area of circle
double calc_area_circle(double radius) {
    return pi * radius * radius;
}

void area_circle() {
    double radius {};
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "The area of a circle with radius " << radius << " is: " << endl;
    cout << "L = pi x r x r" << endl;
    cout << "L = " << calc_area_circle(radius) << endl << endl;
}

double cal_vol_cylinder(double radius, double height) {
    return pi * radius * radius * height;
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of the cylinder with radius " << radius << " and height " << height << " is: " << endl;
    cout << "V = pi x r x r x t" << endl;
    cout << "V = " << cal_vol_cylinder(radius, height) << endl;
}