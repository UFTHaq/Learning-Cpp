#ifndef MOVIE21_H
#define MOVIE21_H
#include <string>
#include <iostream>

#pragma once

class Movie {
private:
    std::string name;
    std::string rating;
    std::string synopsis;
    int stars;
    int watched;

public:
    // Constructor
    Movie(std::string name = "None", std::string rating = "None", std::string synopsis = "None", int stars = 1, int watched = 1);
    // Copy Constructor
    Movie(const Movie &source);
    // Destructor
    ~Movie();

    // methods
    void set_name(std::string name) {
        this->name = name;
    }
    std::string get_name() const {
        return name;
    }

    void set_rating(std::string rating) {
        this->rating = rating;
    }
    std::string get_rating() const {
        return rating;
    }

    void set_synopsis(std::string synopsis) {
        this->synopsis = synopsis;
    }
    std::string get_synopsis() const {
        return synopsis;
    }

    void set_stars(int stars) {
        this->stars = stars;
    }
    int get_stars() const {
        return stars;
    }

    void set_watched(int watched) {
        this->watched = watched;
    }
    int get_watched() const {
        return watched;
    }

    void increment_watched() {
        ++watched;
    }

    void display() const;
};

#endif