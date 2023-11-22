#include "Movies21.h"

Movies::Movies() {

}

Movies::~Movies() {

}

bool Movies::add_movie(std::string name, std::string rating, std::string synopsis, int stars, int watched) {
    for (const auto &movie: movies) {
        if (movie.get_name() == name) {
            return false;
        } else {
        }
    }
    Movie temp {name, rating, synopsis, stars, watched};
    movies.push_back(temp);
    return true;
}

bool Movies::increment_watched(std::string name) {
    for (auto &movie: movies) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

void Movies::display() const {
    if (movies.size() == 0) {
        std::cout << "Sorry, no movies to display\n" << std::endl;
    } else {
        std::cout << "\n================================================" << std::endl;
        for (const auto &movie: movies) {
            movie.display();
        }
        std::cout << "\n================================================" << std::endl;
    }
}