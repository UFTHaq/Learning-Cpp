// SHIPPIPNG COST CALCULATOR
/*
    Ask the user for package dimension in inches
    length, width, height - these should be integers

    All dimension must be 10 inches or less or we cannot ship it

    Base cose $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << endl;

    int length{}, width{}, height{};
    double base_cost{2.50};

    const int tier1{100};
    const int tier2{500};

    int max_dimension_length{10};

    double tier1_charge{0.10};
    double tier2_charge{0.25};

    int package_volume{};

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter the length, width & height of the package separated by space: ";
    cin >> length >> width >> height;

    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
        cout << "Sorry, package rejected - dimension exceeded" << endl;
    } else {
        double package_cost{};
        package_volume = length * width * height;
        package_cost = base_cost;

        if (package_volume > tier2) {
            package_cost += package_cost * tier2_charge;
            cout << "Adding tier 2 surcharge" << endl;
        } else if (package_volume > tier1) {
            package_cost += package_cost * tier1_charge;
            cout << "Adding tier 1 surcharge" << endl;
        }
        cout << fixed << setprecision(2);    // Make round to digit only
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship" << endl;

    }

    cout << endl;
    return 0;
}