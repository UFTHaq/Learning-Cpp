#ifndef MOVIES21_H
#define MOVIES21_H
#include <vector>
#include <string>
#include "Movie21.h"

#pragma once

class Movies {
private:
    std::vector<Movie> movies;
public:
    Movies();
    ~Movies();


    bool add_movie(std::string name, std::string rating, std::string synopsis, int stars, int watched);

    bool increment_watched(std::string name);

    void display() const;
};

#endif