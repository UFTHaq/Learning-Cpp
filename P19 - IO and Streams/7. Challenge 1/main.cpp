#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each Country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

std::string ruler_txt = "1234567890123456789012345678901234567890123456789012345678901234567890";

void ruler() {
    std::cout << ruler_txt << std::endl;
    std::cout << std::endl;
}

int center_title(int title, int ruler) {
    int width = ruler - title;
    width = (width/2) + title;
    return width;
}

std::string line() {
    std::string line;
    line += "|";
    for (size_t i = 0; i < (ruler_txt.length() - 2); i++) {
        line += "=";
    }
    line += "|";
    return line;
}

std::string line2() {
    std::string line;
    line += "|";
    for (size_t i = 0; i < (ruler_txt.length() - 2); i++) {
        line += "-";
    }
    line += "|";
    return line;
}

void tab() {
    for (int i = 0; i < 20; i++) {
            std::cout << " ";
        }
}

int main() {
    std::cout << std::fixed << std::setprecision(2) << std::endl;

    Tours tours {
        "Tour Ticket Prices from Miami",
        {
            {
                "Colombia", {
                    {"Bogota", 8778000, 400.98},
                    {"Cali", 2401000, 424.12},
                    {"Medellin", 2462000, 350.98},
                    {"Cartagena", 972000, 345.34}
                },
            },
            {
                "Brazil", {
                    {"Rio De Janiero", 13500000, 567.45},
                    {"Sao Paulo", 11310000, 975.45},
                    {"Salvador", 18234000, 855.99}
                },
            },
            {
                "Chile", {
                    {"Valdivia", 260000, 569.12},
                    {"Santiago", 7040000, 520.00}
                },
            },
            {
                "Argentina", {
                    {"Buenos Aires", 3010000, 723.77}
                },
            }
        }
    };

    ruler();

    int length_title = tours.title.length();
    int length_ruler = ruler_txt.length();

    int width = center_title(length_title, length_ruler);

    // Unformatted display so you can see how to access the vector elements

    std::cout << line() << std::endl;
    
    std::cout << "|" << std::setw(width - 1) << tours.title
              << std::setw(length_ruler - width) << std::right << "|" << std::endl;

    std::cout << line() << std::endl;

    std::string country = "Country";
    std::string city = "City";
    std::string population = "Population";
    std::string price = "Price";

    // int jarak_total = length_ruler;
    int jarak1 = 20;
    int jarak2 = 20;
    int jarak3 = 13;
    int jarak4 = 15;

    std::cout << "| " << std::setw(jarak1 - 2) << std::left << country
              << std::setw(jarak2) << std::left << city
              << std::setw(jarak3) << std::right << population
              << std::setw(jarak4) << std::right << price 
              << " |" << std::endl;
    std::cout << line2() << std::endl;

    for (auto country: tours.countries) {
        for (size_t i = 0; i < country.cities.size(); i++) {
            if (i == 0) {
                std::cout << "| ";
                std::cout << std::setw(jarak1 - 2) << std::left << country.name;
            } else {
                std::cout << std::setw(jarak1) << std::left << "| ";
            }
            std::cout << std::setw(jarak2) << std::left << country.cities.at(i).name
                      << std::setw(jarak3) << std::right << country.cities.at(i).population
                      << std::setw(jarak4) << std::right << country.cities.at(i).cost
                      << " |" << std::endl;

        }
        std::cout  << line2() << std::endl;
        // std::cout << std::endl;
    }

    std::cout << std::endl;
    return 0;
}