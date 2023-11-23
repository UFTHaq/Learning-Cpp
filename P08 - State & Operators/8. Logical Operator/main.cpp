// LOGICAL OPERATOR

#include <iostream>
using namespace std;

int main() {
    cout << endl;

    int num{};
    const int lower{10}, upper{20};

    cout << boolalpha;

    // Determine if an entered integer is between two other integers
    // assume lower < upper
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
    cin >> num;

    bool within_bounds{false};

    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl;

    // Determine if an entered integer is outside two other integers
    // assume lower < upper
    cout << "\nEnter an Integer - bounds are " << lower << " and " << upper << " : ";
    cin >> num;

    bool outside_bounds{false};
    outside_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << endl; 

    // Determine if an entered integes is exactly on the boundary
    // assume lower < upper
    cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
    cin >> num;

    bool on_bounds{false};
    on_bounds = (num == lower || num || upper);
    cout << num << " is on one of the bounds which are " << lower << " and " << upper << " : " << on_bounds << endl;

    // Determine is you need to wear a coat based on temperature and wind speed
    bool wear_coat{false};
    double temperature{};
    int wind_speed{};

    const double temperature_for_coat{22};
    const int wind_speed_for_coat{35};

    // Require a coat if either wind is too high OR temperature is too low
    cout << "\nEnter the current temperature in (C): ";
    cin >> temperature;
    cout << "Enter windspeed in (kph): ";
    cin >> wind_speed;

    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat? (using OR Operator) " << wear_coat << endl;

    // Require a coat if BOTH the windspeed is too high AND temperature is too low
    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat? (using AND Operator) " << wear_coat << endl;

    cout << endl;
    return 0;
}