#include "Movie21.h"

// Constructor
Movie::Movie(std::string name, std::string rating, std::string synopsis, int stars, int watched)
    : name{name}, rating{rating}, synopsis{synopsis}, stars{stars}, watched{watched} {
}

// Copy constructor
Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.synopsis, source.stars, source.watched} {
        std::cout << "Copy Constructor Delegating - Made Copy of: " << source.name << std::endl;
    }

Movie::~Movie() {
    std::cout << "Destructor called for: " << name << std::endl;
}

void Movie::display() const {
    std::cout <<  name << " " << rating << " " << synopsis << " " << stars << " " << watched << std::endl;
}

